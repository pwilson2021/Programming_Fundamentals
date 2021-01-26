#include <iostream>

int main() {
	int integerValue;
	int *integerValuePtr = &integerValue;
	int &ir = integerValue;
	const int newIntegerVal = 3;
	// double numbers = 0437;
	int charNu  = 'a';
	// double hexnum {0xf3f2};

	integerValue = 5;
	++*integerValuePtr;
	ir++;

	 
	std::cout << integerValue << std::endl;
	std::cout << 0437 << "\n" << charNu << "\n" << 0xf3f2 << "\n";
}
