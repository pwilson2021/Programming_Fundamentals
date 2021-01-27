#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 0;
	int count = 0;
	string sentence;

	cout << "Enter a line with a question mark " << endl;
	cin >> sentence;

	char input_line [] = sentence;

	while( i < sentence.length()) {
		++i;
		if ( input_line[i] == '?') ++count;
	}

	cout << count << endl;
}
