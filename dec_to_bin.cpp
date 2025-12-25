#include <bits/stdc++.h>
using namespace std;

int dectobin(int dec)
{
    int ans = 0, pow = 1;
    while (dec > 0)
    {
        int rem = dec % 2;
        dec /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
int main()
{
    int dec;
    cin >> dec;
    cout << dectobin(dec) << endl;
    return 0;
}