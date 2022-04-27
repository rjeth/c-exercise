//Decimal to Roman Numeral
#include <iostream>
using namespace std;
int main()
{
    int num, i = 0;
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    cout << "Enter a Number: ";
    cin >> num;

    if (num > 1000)
    {
        cout << "Don't Staph";
    }
    else
    {
        while (num)
        {
            while (num / decimal[i])
            {
                cout << symbol[i];
                num -= decimal[i];
            }
            i++;
        }
    }
}