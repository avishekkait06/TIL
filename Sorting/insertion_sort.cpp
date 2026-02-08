#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=5;
    int arr[5]={4,1,5,2,3};
for(int i=1 ; i<n ; i++){
    int curr = arr[i];
    int pre = i-1;
    while(pre >=0 && arr[pre]>curr){
        arr[pre+1]=arr[pre];
        pre--;
    }
    arr[pre+1]=curr;
}
for(auto i : arr){
    cout <<" "<< i ;
}
cout << endl;
return 0;
}