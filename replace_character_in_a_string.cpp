#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int i, j;
    string s; 
    char rep, change;
    cout << "Enter a String: ";
    //getline(cin, s);
    cin >> s;
    cout << "Enter Character to Replace: ";
    cin >> rep;
    cout << "Enter Character: ";
    cin >> change;
    
   replace(s.begin(), s.end(), rep, change); // replace all 'x' to 'y'
    cout << "String with replaced characters: " << s << endl;
}