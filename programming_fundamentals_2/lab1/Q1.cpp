#include <iostream>

int main () {
	enum Colors {RED, YELLOW, AMBER=YELLOW, GREEN};
	
	std::cout << Colors;
       /*	for(int i; i < 5; i++) {
		std::cout << Colors[i]; } */
}
