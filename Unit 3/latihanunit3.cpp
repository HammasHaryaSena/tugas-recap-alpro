#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b[a];
    int c = 0;

   
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
        c += b[i];
    }

   printf("%d\n", c);

    return 0;
}

