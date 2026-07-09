#include <bits/stdc++.h>
using namespace std;

int main(){
   int n ;
   cin >> n ;
   int c=0;
   if(n<=1)
   {
    cout << "Not Prime" <<endl;
   }
   for(int i =1 ; i<=n ; i++){
if(n%i==0){
    c++;
}
   }
if(c==2){
    cout << "prime" <<endl;
}
else {
    cout <<"Not prime"<<endl;
}

    return 0;
}