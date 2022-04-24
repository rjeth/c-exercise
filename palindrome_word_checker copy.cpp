#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    string value;
    cout << "Enter a String: ";
    cin >> value;
    
    string temp = value;
    string temp1 = value;
    string temp2 = value;
    
    reverse(temp.begin(), temp.end());
 
    remove(temp1.begin(), temp1.end(), ' ');
    for_each(temp1.begin(), temp1.end(), [](char & c) {
        c = ::tolower(c);
    });
    
    reverse(temp2.begin(), temp2.end());
    remove(temp2.begin(), temp2.end(), ' ');
    for_each(temp2.begin(), temp2.end(), [](char & c) {
        c = ::tolower(c);
    });
    
    string result = (temp2 == temp1 ) ? "is a palindrome" : "is not a palindrome";
    cout << "Reversed String: " << temp << endl;
    cout << result;
}
