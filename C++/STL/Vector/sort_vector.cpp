#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {34, 12, 5, 67, 23, 89, 1};
    sort(v.begin(), v.end()); // Sorting the vector in ascending order
    for (auto u : v)
        cout << u << " ";
    cout << endl;
    return 0;
}