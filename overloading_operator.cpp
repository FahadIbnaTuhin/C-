#include <iostream> // https://www.youtube.com/watch?v=BnMnozsSPmw
#include <string>
#include <list>
using namespace std;

struct YoutubeChannel 
{
    string Name;
    int SubcribersCount;

    YoutubeChannel(string name, int subcribersCount) { // Constructor
        Name = name;
        SubcribersCount = subcribersCount;
    }
    bool operator==(const YoutubeChannel& channel) const{
        return this->Name == channel.Name;
    }
};

// 1st Part - Overloading
// void operator<<(ostream& COUT, YoutubeChannel& ytChannel) { // using ostream to work with cout
//      COUT << "Name: " << ytChannel.Name << endl;
//      COUT << "Subscribers: " << ytChannel.SubcribersCount << endl;
// }

// 2nd Part 
ostream& operator<<(ostream& COUT, YoutubeChannel& ytChannel) { // return type will be ostream&
     COUT << "Name: " << ytChannel.Name << endl;
     COUT << "Subscribers: " << ytChannel.SubcribersCount << endl;
     return COUT;
}

// 3rd Part
struct MyCollection {
    list<YoutubeChannel>myChannels;

    void operator+=(YoutubeChannel& channel) { // only one parameter
        this->myChannels.push_back(channel);
    }
    void operator-=(YoutubeChannel& channel) { 
        this->myChannels.remove(channel); // after going to definition of remove, it is just matching == but here this won't work as we are not comparing simple string.
    }
};

// 4th Part
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for(YoutubeChannel ytChannel: myCollection.myChannels) {
        COUT << ytChannel << endl; 
    }
    return COUT;
}

int main() {
    // 1st Part
    // YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
    // cout << yt1; // Compiler don't know how to print this, that's when overloading comes

    // YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
    // YoutubeChannel yt2 = YoutubeChannel("Another Channel", 400);
    // cout << yt1 << yt2; // If you use the first part, it will now give you error. To solve this, you have to use 2nd part

    // We can invoke the operator function just like the regular function. But cout << yt1 is commonly used, so we will use the previous one.
    // operator<<(cout, yt1);

    // 3rd Part
    YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
    YoutubeChannel yt2 = YoutubeChannel("Another Channel", 400);
    MyCollection myCollection;
    myCollection += yt1; // here we used only one parameter inside the MyCollection struct constructor because in this line, the left will automatically work there for using this->myChannels
    myCollection += yt2;

    // The 1st and 2nd are almost same. So, consider 2nd here. 
    // Difference between 2nd and 3rd:
        // 1) inside 3rd: the operator function is created as member function but inside 2nd, it is created as global function
        // 2) inside 3rd, the operator function takes only one parameter while inside 2nd, it's taking 2 parameter because inside 3rd, the operator
            // is a member class and we passed only one parameter because the first operand(myCollection += yt1 here the left side: myCollection) 
            // will be automatically like this: this->myChannels because it is a member function

    // cout << myCollection; // Error without 4th part because it is not overloaded for my collection data type

    myCollection -= yt2;
    cout << myCollection;


    return 0;
}