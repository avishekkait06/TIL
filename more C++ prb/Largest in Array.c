#include <stdio.h>

int main() {
    int n, max, x;

    scanf("%d", &n);
    scanf("%d", &max);

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > max)
            max = x;
    }

    printf("%d", max);
    return 0;
}
