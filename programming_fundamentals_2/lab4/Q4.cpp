#include <iostream>
#include <string>

using namespace std;

void output(char[], int = 0, int = 0);

int main() {
        char charArray[]  = "Yirenkyi Philip";
        output(charArray, 2);
        output(charArray, 2,5);
}

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

