#include <iostream>
using namespace std;
int main()
{
    int binary[20], decimal, i = 0;
    cout << "Enter a Number: ";
    cin >> decimal;

    if (decimal > 255)
    {
        cout << "Lagpas! Di pwede yarn";
    }
    else
    {
        while (decimal != 0)
        {
            binary[i] = decimal % 2;
            i++;
            decimal = decimal / 2;
        }

        for (i = (i - 1); i >= 0; i--)
            cout << binary[i];
    }
}

// Binary to Decimal
#include <iostream>
using namespace std;
int main()
{
    char binary[8];
    int decimal = 0, i = 1, rem;
    cout << "Enter a Number: ";
    cin >> binary;

    size = strlen(binary);

    if (binary > 8)
    {
        cout << "Max allowed 8bits only";
    }
    else
    {
        while (binary != 0)
        {
            rem = binary % 10;
            decimal = decimal + (rem * i);
            i = i * 2;
            binary = binary / 10;
        }

        cout << decimal << endl;
    }
}