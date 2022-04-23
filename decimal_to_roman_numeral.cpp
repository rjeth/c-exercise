#include <iostream>
using namespace std;
// Driver Code
int main()
{
    int num = 993;
  int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; //base values
    string symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  //roman symbols
    int i = 0;
 
    while(num){ //repeat process until num is not 0
        while(num/decimal[i]){  //first base value that divides num is largest base value
            cout<<symbol[i];    //print roman symbol equivalent to largest base value
            num -= decimal[i];  //subtract largest base value from num
        }
        i++;    //move to next base value to divide num
    }
}