#include <iostream>
#include <string>

// the switch statement in C++ requires constant expressions in its case labels
const int Pen {10}, Marker {20}, Circle {30};

int main() {
	// Switch can work for only integral types and enums: int, long, unsigned short etc. 
	// String can not work with switch cases

	int tool {Marker};

	// switch (tool) {
	// 	case Pen: {
	// 		std::cout << "Active tool is pen" << std::endl;
	// 	} 
	// 	break;

	// 	case Marker: {
	// 		std::cout << "Active tool is marker" << std::endl;
	// 	}
	// 	break;

	// 	case Circle: {
	// 		std::cout << "Active tool is Circle" << std::endl;
	// 	}
	// 	break;

	// 	default: {
	// 		std::cout << "Can't match any tool" << std::endl;
	// 	}
	// }

	// If you don't use break, then if something matches this and those after that will be executed
	// switch (tool) {
	// 	case Pen: {
	// 		std::cout << "Active tool is pen" << std::endl;
	// 	}

	// 	case Marker: {
	// 		std::cout << "Active tool is marker" << std::endl;
	// 	}

	// 	case Circle: {
	// 		std::cout << "Active tool is Circle" << std::endl;
	// 	}

	// 	default: {
	// 		std::cout << "Can't match any tool" << std::endl;
	// 	}
	// }

	// For some cases if you want to give same output, then: 
	switch (tool) {
		case Pen: {
			std::cout << "Active tool is pen" << std::endl;
		} 
		break;

		case Marker:
		case Circle: {
			std::cout << "Active tool is Marker/Circle" << std::endl;
		}
		break;

		default: {
			std::cout << "Can't match any tool" << std::endl;
		}
	}

	// Error: String don't work with switch case
	// std::string name {"john"};
	// switch (name) {
	// 	case "Fahad": {
	// 		std::cout << "Fahad" << std::endl;
	// 	}
	// 	break;

	// 	default: {
	// 		std::cout << "Not Found" << std::endl;
	// 	}
	// }

	return 0;
}