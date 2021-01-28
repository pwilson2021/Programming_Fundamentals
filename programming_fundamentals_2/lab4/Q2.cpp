#include <iostream>
#include <string>

using namespace std;

void output(int);
void output(double);
void output(char);
void output(string);
void output(long);

int main() {
        char v = 'a';
        output(3.13);
        output(3);
        output("hi there");
        output(v);
        output(21414414);
}

void output(int a) { cout << "Output an Integer " << a << endl; }
void output(double b) { cout << "Output a Double " << b << endl; }
void output(char c) { cout  << "Output a char " << c << endl; }
void output(string d) { cout << "Output a string " << d << endl; }
void output(long e) { cout << "Output a long " << e << endl; }