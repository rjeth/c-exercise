// Driver code
#include <iostream.h>
#include <conio.h>
#include <string.h>
using namespace std;

char name1[20], name2[20];
int n1, n2, n3;

void get_name();
int string_length(char[]);
void cancel_similar_letters(char[], char[]);
char flames_calculation(int);
void display(char);

void main()
{
    clrscr();
    get_name();
    n1 = string_length(name1);
    n2 = string_length(name2);
    cancel_similar_letters(name1, name2);
    strcat(name1, name2);
    n3 = string_length(name1);
    char result = flames_calculation(n3);
    display(result);
    getch();
}

void get_name()
{
    cout << "Enter name 1 :";
    cin >> name1;
    cout << "Enter name 2 :";
    cin >> name2;
}

int string_length(char name[])
{
    return strlen(name);
}

void cancel_similar_letters(char name1[], char name2[])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (name1[i] == name2[j])
            {
                for (int k = i; k < n1 - 1; k++)
                {
                    name1[k] = name1[k + 1];
                }
                for (k = j; k < n2 - 1; k++)
                {
                    name2[k] = name2[k + 1];
                }
                name1[n1 - 1] = '\0';
                name2[n2 - 1] = '\0';
                n1 = n1 - 1;
                n2 = n2 - 1;
            }
        }
    }
}

char flames_calculation(int n)
{
    char name[] = "flames";
    int str_len = 6;
    int i = 1, j = 0;
    // n=n-1;
    while (str_len > 1)
    {
        if (n == i)
        {
            for (int k = j; k < str_len - 1; k++)
            {
                name[k] = name[k + 1];
            }
            name[str_len - 1] = '\0';
            str_len = str_len - 1;
            i = 0;
            j = j - 1;
        }
        j++;
        if (j == str_len)
        {
            j = 0;
        }
        i++;
    }
    return name[0];
}

void display(char result)
{
    cout << "Yours Relation is ";
    switch (result)
    {
    case 'f':
        cout << "Friend";
        break;
    case 'l':
        cout << "Love";
        break;
    case 'a':
        cout << "Affection";
        break;
    case 'm':
        cout << "Marriage";
        break;
    case 'e':
        cout << "Enemy";
        break;
    case 's':
        cout << "Sister";
        break;
    }
}
