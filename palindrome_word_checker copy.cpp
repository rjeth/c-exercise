#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    string value, temp1, temp2;
    cout << "Enter a String: ";
    getline(cin, value);//original value
   
    temp1 = value; //temporary 1 lowercase & remove space
    temp2 = value; //temporary 2, lowercase & remove space, reverse
    
    reverse(value.begin(), value.end());//reverse
 
    remove(temp1.begin(), temp1.end(), ' ');//remove space
    for_each(temp1.begin(), temp1.end(), [](char & c) {//iterate to lowercase
        c = ::tolower(c);
    });
    
    reverse(temp2.begin(), temp2.end());//reverse
    remove(temp2.begin(), temp2.end(), ' ');//remove space
    for_each(temp2.begin(), temp2.end(), [](char & c) {// iterate to lowercase
        c = ::tolower(c);
    });
    
    string result = (temp2 == temp1 ) ? "is a palindrome" : "is not a palindrome"; //ternary operator
    
    cout << "Reversed String: " << value << endl;
    cout << result;
}
