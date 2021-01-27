#include <bits/stdc++.h>

using namespace std;

int main() {
	char text [100];
	cout << "Please input a sentence? :";
	cin.get(text, 100);

	
	//cout << text << endl;
	int n = strlen(text);
 	int i = 0;	
	do {
		swap(text[i], text[n - i - 1]);
		i++;
	} while (i < n / 2 ); 

	cout << text << endl; 
}
