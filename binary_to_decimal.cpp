// Binary to Decimal
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char binary[8];
    int decimal = 0, i = 1, rem;
    cout << "Enter a Number: ";
    cin >> binary;
    
    int binarysize = strlen(binary);
    
    if (binarysize >= 8)
    {
        cout << "Max allowed 8bits only";
    }
    else
    {
        int bin = stoi(binary);
        while (bin != 0)
        {
            rem = bin % 10;
            decimal = decimal + (rem * i);
            i = i * 2;
            bin = bin / 10;
        }
        cout << decimal << endl;
    }
}