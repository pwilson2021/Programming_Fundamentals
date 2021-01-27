#include <iostream>
#include <string>

using namespace std;

unsigned int rotate(unsigned int s, unsigned int r);

int main() {
	unsigned int s, r;
	cout << "Enter the s value? ";
	cin >> s;
	cout << "Enter the r value? ";
	cin >> r;

	rotate(s,r);
}

unsigned int rotate(unsigned int s, unsigned int r) {
	int result = s << r;
	cout << "Input Values: " << s << " " << r << endl ;
	cout << "Original Value: " << s << endl;
	cout << "Rotated Value: " << hex << result << endl;
	return 0;
}
