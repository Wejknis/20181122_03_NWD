#include <stdio.h>

int main() {
    int a, b, c;

    printf("Podaj a: "); scanf("%d", &a);
    printf("Podaj b: "); scanf("%d", &b);

    do {
       a < b ? b -= a : (a -=b);
    } while (a != b);

    printf("Wynik: %d, a");

    return 0;
}
