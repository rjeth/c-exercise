#include <iostream>
#include <string>
using namespace std;
int main()
{
    string boyname, girlname, boytemp, girltemp;
    int total;
    cout << "F-L-A-M-E-S\n\n";
    cout << "Enter Boy Name:";
    cin >> boyname;
    cout << "Enter Girl Name:";
    cin >> girlname;

    boytemp = boyname;
    girltemp = girlname;

    int i, j, count1 = 0, count2 = 0;
    char a, b;

    for (i = 0; i < boyname.length() || i < girlname.length(); i++)
    {
        a = tolower(boyname[i]);
        b = tolower(girlname[i]);
        for (j = 0; j < girltemp.length() || j < boytemp.length(); j++)
        {
            if (a == tolower(girltemp[j]) && a != ' ')
            {
                count1++;
                girltemp[j] = '*';
            }

            if (b == tolower(boytemp[j]) && b != ' ')
            {
                count2++;
                boytemp[j] = '*';
            }
        }
    }

    while (total > 6)
    {
        total -= 6;
    }

    switch (total)
    {
    case 1:
        cout << "are only Friends";
        break;
    case 2:
        cout << "are only Love";
        break;
    case 3:
        cout << "are only Angery";
        break;
    case 4:
        cout << "are only Marry";
        break;
    case 5:
        cout << "are only Enemy";
        break;
    case 6:
        cout << "are only Sweetheart";
        break;
    default:
        cout << "NOT COMPATIBLE, TRY ANOTHER PAIR/PERSONS";
    }
    return 0;
}