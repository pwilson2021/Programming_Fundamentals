#include <iostream>
#include <string>

using namespace std;

int main() {
    typedef string array_ui[10];
    string longword, textinput;

    longword = "";

    array_ui phil {}; 
    for (int i = 0; i < 10; i++)
    {
        cout << "New Value: ";
        cin >> textinput; 
        phil[i] = textinput;
    }
    
    
    for (int i = 0; i < 10 ; i++)
    {
        if ( longword.size() < phil[i].size())
        {
            longword = phil[i];
        }
    }

    cout << longword << endl;
}