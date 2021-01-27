#include <iostream>

using namespace std; 


int main() {
	int first_op, second_op;
	char operator_i;

	cout << "Please input two operands: ";
	cin >> first_op;
	cin >> second_op;
	cout << "Please input an operator: ";
	cin >> operator_i;

	switch (operator_i)
	 	{
			case '*': cout << "Multiplying " << first_op << " and " << second_op << " = " << first_op * second_op << endl;
				break;
			case '+': cout << "Addition " << first_op << " and " << second_op << " = " << first_op + second_op << endl;
				break;
			case '/': cout << "Division " << first_op << " by " << second_op << " = " << first_op / second_op << endl;
				break;
			case '-': cout << "Subtraction " << first_op << " minus " << second_op  << " = " << first_op - second_op << endl;
				break;
			default: cout << "Invalid Operand";
	 	}

}
