##include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    char c;
    cout << "Enter a String: ";
    cin >> s;
    cout << "Enter a Character: ";
    cin >> c;

    size_t n = count(s.begin(), s.end(), c);
    cout << "Instance of " << c << " in the string " << n ;
} 