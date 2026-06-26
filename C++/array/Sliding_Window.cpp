#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , w ,i =0 ;
    cout << "enter the number total nuber of a  array :"<<endl;
    cin >> n ;
    vector <int> array(n);
    for(int i = 0 ; i <n ; i++){
        cin >> array[i];
    }
    cout <<"enter the number of Sliding Window : "<< endl;
    cin >> w ;
    int  corrent = 0;
    int max = 0 ;
    for(int i =0 ; i < w ; i++){
        corrent = corrent + array[i];
    }
    max = corrent ;
    for(int i =1 ; i <= n-w ; i++ ){
 corrent = corrent - array[i-1]+ array[i+w-1];
 if(max < corrent ){
    max = corrent ;
 }
    }
cout << max ;
}


int main() {
    
    
        solve();
    
    
    return 0;
}