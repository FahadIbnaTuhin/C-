#include <iostream>
#include "compare.h"

int main()
{
	// In C++, a compilation process translates your source code files (.cpp) into machine-readable 
	// instructions that can be executed by the computer.

	// This works on codeblocks. Here is something problem

	int result = max(20, 25);
    std::cout << result << std::endl;

    result = min(15, 0);
    std::cout << result << std::endl;
    return 0;

    // ld returned 1 exit status - hear ld means linker who combine all 
    // object code with our object code and our custom functions object
    // code together and then make executable file.
    // This is a linker error


	return 0;
}
