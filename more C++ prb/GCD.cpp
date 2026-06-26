#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int rem;
    if(b==0) return a;
    else{
        while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
        
    }
    return a;
}}
int main(){
int n1,n2;
cout<<"Enter Two Numbers:"<<endl;
cin>>n1>>n2;
cout << gcd(n1,n2)<<endl;
return 0;
}