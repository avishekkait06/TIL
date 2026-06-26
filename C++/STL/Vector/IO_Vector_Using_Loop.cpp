#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int>v;
    
  for(int i = 0; i < n; i++){ // Loop to take n inputs
    int a;
    cin >> a;
    v.push_back(a); // Insert a at the end

  }
 cout << v.size() << endl; //output the Size of Vector
    for(int i = 0; i < v.size(); i++) // Loop to output all elements
    {
        cout << v[i] << " "; // Output the ith element
    }

    return 0;
}