#include <iostream>
#include <string>

using namespace std;

void output(int);
void output(double);
void output(char);
void output(char[]);
void output(char [], int);
void output(char[], int, int);
void output(long);

int main() {
        char v = 'a';
        string name = "Yirenkyi Philip";
        // output(3.13);
        // output(3);
        // output("hi there");
        // output(v);
        // output(21414414);
        char charArray[]  = "Yirenkyi Philip";
        output(charArray, 2);
        output(charArray, 2,5);
}

void output(int a) { cout << "Output an Integer " << a << endl; }
void output(double b) { cout << "Output a Double " << b << endl; }
void output(char c) { cout  << "Output a char " << c << endl; }
//void output(string d) { cout << "Output a string " << d << endl; }
void output(long e) { cout << "Output a long " << e << endl; }

void output(char d[] , int f) {
        while(d[f] != '\0' ) {
                cout.put(d[f]);
               f++;
        }
        cout << endl;
}

void output(char g[], int h, int j) {
        while(h != j) {
                cout.put(g[h]);
                h++;
        }
        cout << endl;
}
