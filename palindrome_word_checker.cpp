#include <string>
#include <iostream>
using namespace std;
int main()
{
    string greeting = "Race car";
    int len = greeting.length();
    int n = len - 1;
    string reverse = greeting;
    for (int i = 0; i < (len / 2); i++)
    {
        //remove space and upper case to lower case
        // Using temp to store the char value at index i so
        // you can swap it in later for char value at index n
        char temp = reverse[i];
        reverse[i] = reverse[n];
        reverse[n] = temp;
        n = n - 1;
    }
    cout << reverse << endl;
    if (reverse == greeting)
        cout << "is a palindrome.\n";
    else
        cout << "is NOT a palindrome.\n";
}