#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &it : v){
        cin >> it;
    }

    cout << "===Output=="<< endl;
    for(auto &it : v){
        cout << it <<" ";
    }
    return 0;
}