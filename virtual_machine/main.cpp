#include <iostream>

#include "Compiler.h"

int main()
{
	Compiler ob;
	if (ob.open("C:\\Users\\karennik\\Desktop\\data.txt")) {
		ob.parse();
		ob.show_data();
	}
	else {
		std::cerr << "file not open\n";
		return -1;
	}
	return 0;
}