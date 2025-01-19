#include<bits/stdc++.h>
using namespace std;

int sum( int a, int b )
{
    int c = a + b;  /// c = 2 + 3

    cout << "c = " << c << endl;    /// c = 5

    return c;

    cout <<  "This part will not printed because we have returned already.";
}

int max(int x, int y)
{
    int mx;
    if (x > y) mx = x;
    else mx = y;

    return mx;
}

int min(int x, int y)
{
    if (x < y) return x;
    return y;
}

/// 
int main()
{

    int d = sum(2, 3);  /// a = 2, b = 3.

    cout << d << endl;  /// 5

    int mx = max(6, 9);
    cout << "Max value is = " << mx << endl;  /// Max value is = 9


    int mn = min(7,6);
    cout << "Minimum value is = " << mn << endl;   /// Minimum value is = 6.

    return 0;
}