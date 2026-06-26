#include<bts/stdc++.h>
using namespace std;        
int main(){
    char str[100];
    int length=0;
    cin.getline(str,100);
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }       
    cout<<length;
    return 0;
}