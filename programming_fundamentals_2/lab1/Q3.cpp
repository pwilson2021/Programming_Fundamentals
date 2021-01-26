#include <iostream>
#include <string>

using namespace std;

int main () {
    string word, text;
    int count = 0;
    cout << "Enter word: ";
    cin >> text;

    char textArray[] {text}; //"hello-this-is-a-line-of-input";
    word = "";

    for (int i = 0; i < sizeof(textArray); i++)
    {   
        if (textArray[i] != '-')
        {
            count++;
            word += textArray[i];
        } else {
            cout << "[ " << count << " ] " << word << endl;
            count = 0;
            word = "";
        }  
    }
     
}