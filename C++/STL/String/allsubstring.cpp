#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";

    for (int i = 0; i < s.size(); i++)
    {
        int max_len = s.size()-i;
        {
            for (int len = 1; len <= max_len; len++)
            {
                cout << s.substr(i, len) << endl;
            }
        }
    }
    return 0;
}