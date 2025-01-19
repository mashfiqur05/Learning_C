#include<bits/stdc++.h>
using namespace std;

const int mx = 123;
char s[mx];
char temp[123];

int main()
{
    scanf("%s", &s);

    int len = 0;

    while (s[len] != 0)
    {
        temp[len] = s[len];
        len++;
    }

    for (int i = 0, j = len-1; i < j; i++, j--)
    {
        char revtemp = temp[i];
        temp [i] = temp[j];
        temp[j] = revtemp;
    }

    int equal = 1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] != temp[i])
        {
            equal = 0;
            break;
        }
    }

    if (equal) cout << "PALLINDROME" << endl;
    else cout << "NOT PALLINDROME" << endl;

    return 0;
}