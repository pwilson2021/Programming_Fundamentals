#include <iostream>
  
using namespace std;

int input(int *a, int *b);

int main() {
        int i, j;
        input(&i, &j);

        cout << i + j << endl;
        return 0;
}

int input(int *a, int *b) {
        cout << "Enter two integers separated by ? ";
        cin >> *a;
        cin >> *b;
        return 0;
}