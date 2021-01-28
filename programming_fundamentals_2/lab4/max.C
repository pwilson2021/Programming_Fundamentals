#include "max.h"
#include <iostream>

using namespace std;

void output(int a) { cout << "Output an Integer " << a << endl; }
void output(double b) { cout << "Output a Double " << b << endl; }
void output(char c) { cout  << "Output a char " << c << endl; }
void output(string d) { cout << "Output a string " << d << endl; }
void output(long e) { cout << "Output a long " << e << endl; }

void output(char g[], int h, int j) {
        if(h != 0 &&  j == 0) {
            while(g[h] != '\0') {
               cout.put(g[h]);
               h++;
            }
            cout << endl;
        } else if (h != 0 && j != 0)
            {
                while(h != j) {
                    cout.put(g[h]);
                    h++;
                }
            cout << endl;
        }      
}