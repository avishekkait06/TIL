#include<bits/stdc++.h>
using namespace std;


int main()
    {
        int n;
        vector<int>v;

        while(1){
            cin >> n;
            if( n == 0 ) break; // Exit loop if input is 0
            v.push_back(n); // Insert n at the end
        }

        cout << v.size() <<endl; // Output the Size of Vector
        for (auto u : v )  cout << u <<" "; // Output each element
            cout << endl;
        
            return 0;
    }
