#include <iostream>
#include <string>
using namespace std;
int main()
{
    string boyname, girlname, boytemp, girltemp;
    int total, i, j, count1 = 0, count2 = 0;
    char a, b;

    string flames[6] = {"F - Friend", "L - Love", "A - Angry", "M - Marry", "E - Enemy", "S - Sweetheart"};//array

    for (int f = 0; f < 6; f++)//forloop
    {
        cout << flames[f] << endl;
    }

    cout << endl << "Enter Boy Name:";
    getline(cin,boyname);
    cout << "Enter Girl Name:";
    getline(cin,girlname);

    boytemp = boyname;
    girltemp = girlname;

    for (i = 0; i < boyname.length() || i < girlname.length(); i++)
    {
        a = tolower(boyname[i]);
        b = tolower(girlname[i]);
        for (j = 0; j < girltemp.length() || j < boytemp.length(); j++)
        {
            if (a == tolower(girltemp[j]) && a != ' ')
            {
                count1++;
                girltemp[j]='/';
                
            }
            if (b == tolower(boytemp[j]) && b != ' ')
            {
                count2++;
                boytemp[j]='/';
            }
        }
    }
    
    cout<<boytemp<<endl<<girltemp<<endl;
    total = count1 + count2;
    while (total > 6)
    {
        total -= 6;
    }

    switch (total)
    {
    case 1:
        cout << flames[0];//array
        break;
    case 2:
        cout << flames[1];
        break;
    case 3:
        cout << flames[2];
        break;
    case 4:
        cout << flames[3];
        break;
    case 5:
        cout << flames[4];
        break;
    case 6:
        cout << flames[5];
        break;
    default:
        cout << "Not Compatible";
    }
}