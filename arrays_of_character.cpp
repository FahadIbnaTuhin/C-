#include <iostream>

int main() {
	// 1st
	// char message[] {'a', 'b', 'c'}; // you must need to use '' for char.
	// std::cout << std::size(message) << std::endl;

	// for (auto c : message) {
	// 	std::cout << c << " ";
	// } 
	// std::cout << std::endl;

	// message[1] = 'e'; // you can change value
	// for (auto c : message) {
	// 	std::cout << c << " ";
	// }
	// std::cout << std::endl;


	// 2nd - Converting multiple char to use as a String 
	// for 5 element, the least space will be 5 + 1[1 for '\0'] = 6 must[message2[6]]. Otherwise wrong output
	// char message2[6] {'H', 'e', 'l', 'l', 'o'}; // one more space for '\0'
	// std::cout << "message2 : " << message2 << std::endl;
	// std::cout << "size : " << std::size(message2) << std::endl;

	// wrong string ouput because element is 5 and you used also message2[5]
	// char message2[5] {'H', 'e', 'l', 'l', 'o'}; 
	// std::cout << "message2 : " << message2 << std::endl; // wrong input no space for '\0'
	// std::cout << "size : " << std::size(message2) << std::endl;

	// So, it's better not to tell the space if you add '\0' at the end, then you can use a[]
	// If a character array is null terminated, it is called as C-String
	// char message3[] {'H', 'e', 'l', 'l', 'o', '\0'};
	// std::cout << message3 << std::endl;
	// std::cout << std::size(message3) << std::endl;

	// if you not want to add '\0' then, just use one more space than element
	// char message3[6] {'H', 'e', 'l', 'l', 'o'}; // others will be automatically null character
	// std::cout << message3 << std::endl;
	// std::cout << std::size(message3) << std::endl;
	// last 2 are better to use


	// 3rd
	// Literal C String. Recommanded for storing String. For string use ""
	// char message4 [] {"Hello"}; // An implicit '\0' character is appended to the end of the string
	// std::cout << message4 << std::endl;
	// std::cout << "size : " << std::size(message4) << std::endl; // 6 because added '\0' at the end

	// char message5 [] {"Hi Fahad"}; // also same like before
	// std::cout << message5 << std::endl;
	// std::cout << "size: " << std::size(message5) << std::endl;	

	return 0;
}