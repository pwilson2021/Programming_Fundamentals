#include <bits/stdc++.h>
using namespace std;

int main () {
	int number_input, count, n;
	cout << "Please enter a number? " ;
	cin >> number_input;

	if ( number_input % 2 == 0) {
		for(int i = 0; i <= 20; i++) {
			cout << i  << " x " << number_input  << " = " << i * number_input << "\n" ; 
		}
		return 0;
	} else {
		count = 0;
		n = 0;
		while (count <= 30) {
			if ( n % number_input == 0 ) {
				n++;
			} else {
				cout << n << "\n";
			        n++;
				count++;
			}
		}
		return 0;
	}
}
