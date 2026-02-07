#include<bits/stdc++.h>
using namespace std;

void swap1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int n, vector<int> &v) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap1(v[j], v[j + 1]);
                flag = true;
            }
        }

        if (!flag)
            break;
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

    bubble_sort(n, v);
    print(n, v);

    return 0;
}
