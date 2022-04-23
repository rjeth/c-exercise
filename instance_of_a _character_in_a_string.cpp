#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "Nakakapagpabagabag";
    size_t n = count(s.begin(), s.end(), 'a');
    cout << n ;
}