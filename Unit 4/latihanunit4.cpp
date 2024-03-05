#include <stdio.h>

int main() {
    int a;
    printf("masukan panjang sisi:");
    scanf("%d", &a);

    int b = 4 * a;

    int c = a * a;

    int d = a * a * a;

    printf("keliling: %d\n", b);
    printf("luas: %d\n", c);
    printf("volume: %d\n", d);

    return 0;
}

