#include <stdio.h>

int a(int x, int y[]) {
    int b = 0;
    for (int i = 0; i < x; i++) {
        b += y[i];
    }
    return b;
}

int main() {
    int x;
    scanf("%d", &x);

    int y[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }

    int b = a(x, y);
    printf("%d\n", b);

    return 0;
}

