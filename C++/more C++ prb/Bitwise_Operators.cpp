#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int max_and = 0;
    int max_or  = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {

            int and_val = a & b;
            int or_val  = a | b;
            int xor_val = a ^ b;

            if (and_val < k && and_val > max_and)
                max_and = and_val;

            if (or_val < k && or_val > max_or)
                max_or = or_val;

            if (xor_val < k && xor_val > max_xor)
                max_xor = xor_val;
        }
    }

    cout << max_and << endl;
    cout << max_or << endl;
    cout << max_xor << endl;

    return 0;
}
