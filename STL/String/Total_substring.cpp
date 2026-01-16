#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cout <<" ===input===" << endl;
    cin >> s ;
    int c = 0;
    
    cout <<" ===Output===" << endl;
    
    for (int i = 0; i < s.size(); i++)
    {
        string r = "";
        for (int j = i; j < s.size(); j++)
        {
            r += s[j];
            cout << r << endl;
            c++;
        }
    }
    cout << "Total substring = " << c << endl;
    return 0;
}