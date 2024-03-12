#include <iostream>
#include <iomanip>

int main()
{
	// https://en.cppreference.com/w/cpp/io/manip
	// std::cout << "Hello";
	// std::cout << "World" << std::endl << std::endl;

	// std::cout << "Hello" << std::endl;
	// std::cout << "World" << "\n\n";

	// std::cout << "Hello\n";
	// std::cout << "World\n\n";

	// std::cout using this data doesn't go directly from the coding to terminal, data goes to intermidiate buffer
	// or some stroage kind of thing before it actually goes to the terminal. When the buffer is full, data went to 
	// the terminal in one go

	// To make the data directly go to the termianl we use std::flush
	// std::flush --> causes immediate sending of data to the device connected to the stream
	// std::cout << "Hello Bangladesh" << std::endl << std::flush;

	// std::setw()
	// std::cout << "Unformatted table : " << std::endl;
	// std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
	// std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
	// std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl << std::endl;

	// std::cout << "Formatted table : " << std::endl;
	// std::cout << std::setw(10) << "Daniel" <<  std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
	// std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
	// std::cout << std::setw(10) << "Jordan" <<  std::setw(10) << "Parker" << std::setw(5) << "45" << "\n\n";

	// left justified
	// int col_width{10};
	// std::cout << std::left;
	// std::cout << std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) << "325" << std::endl;
	// std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << "33" << std::endl;
	// std::cout << std::setw(col_width) << "Jordan" <<  std::setw(col_width) << "Parker" << std::setw(col_width) << "245" << "\n\n";

	// Internal Justified: sign is left justified, data is right justified
	// std::cout << std::left;
	// std::cout << std::setw(10) << -123.45 << std::endl;
	// std::cout << std::right;
	// std::cout << std::setw(10) << -123.45 << std::endl;
	// std::cout << std::internal;
	// std::cout << std::setw(10) << -123.34 << std::endl;

	// std::setfill
	// std::cout << std::left;
	// std::cout << std::setfill('-'); // The fill character
	// std::cout << std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) << "325" << std::endl;
	// std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << "33" << std::endl;
	// std::cout << std::setw(col_width) << "Jordan" <<  std::setw(col_width) << "Parker" << std::setw(col_width) << "245" << "\n\n";

	// showpos ans noshowpos: show or hide the + sign for positive (not for negative)
	// int pos_num {34};
	// int neg_num {-45};
	// std::cout << pos_num << " " << neg_num << "\n\n"; // default is noshowpos
	// std::cout << std::showpos;
	// std::cout << pos_num << " " << neg_num << "\n\n";
	// std::cout << std::noshowpos;
	// std::cout << pos_num << " " << neg_num << "\n\n";std::dec

	return 0;
}