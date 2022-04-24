#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s; 
    char rep, change;
    cout << "Enter a String: ";
    cin >> s;
    cout << "Enter Character to Replace: ";
    cin >> rep;
    cout << "Enter Character: ";
    cin >> change;
    
    replace(s.begin(), s.end(), rep, change); // replace all 'x' to 'y'
    cout << "String with replaced characters" s << endl;
}