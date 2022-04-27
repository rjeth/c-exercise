#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    char c;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << "Enter a Character: ";
    cin >> c;

    for_each(s.begin(), s.end(), [](char & c) {
        c = ::tolower(c);
    });
    size_t n = count(s.begin(), s.end(), c);
    cout << "Instance of " << c << " in the string " << n ;
} 