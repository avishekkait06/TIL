#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    s.push(5);
    s.push(5);
    s.push(4);
    s.push(2);
    s.push(8);

    cout <<"size of the stack : "<< s.size() << endl;
    int n =s.size();
    cout <<"All data in stack :" <<endl;
  while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
  }

    return 0;
}