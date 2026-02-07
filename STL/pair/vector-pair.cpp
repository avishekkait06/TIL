#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int ,string>> v(n);
    for(auto &it : v){
        cin >> it.first >> it.second;
    }
    for(auto &it : v){
        cout << it.first << " "<< it.second<< endl;
    }
}