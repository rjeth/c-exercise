#include <iostream>
using namespace std;
// Driver Code
int main()
{
    string str = "aso";
    string rev = "";
    
  for(int i=str.length()-1; i>=0; i--){
        //if the character is in upper case, transform it to lower case
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
            
        //assign the character to reverse string variable
        rev +=str[i];
    }
    
    cout << rev << endl;
    if (rev == str) {
        cout <<  "Word is a Palindrome";
    }
    // Otherwise
    else {
        cout <<  "Word is not a Palindrome";
    }
    return 0;
}