#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
string s = "aaaXaaaXXaaXXXaXXXXaaa";
replace(s.begin(), s.end(), 'X', 'Y'); // replace all 'x' to 'y'
cout << s << endl;

}