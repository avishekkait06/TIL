#include<bits/stdc++.h>
using namespace std;

void swap1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selction_sort(int n, vector<int> &v) {
    for (int i = 0; i < n - 1; i++) {
        int smallindex = i;
        for (int j = i+1; j < n ; j++) {
            if (v[j] < v[smallindex]) {
                smallindex = j;
            }
        }

    swap1(v[i],v[smallindex]);

    }
}

void print(int n, vector<int> v) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    selction_sort(n, v);
    print(n, v);

    return 0;
}
