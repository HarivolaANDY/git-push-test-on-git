#include <stdio.h>
int addition(int x, int y) {
    return x + y;
}

int main() {
    int a = 5, b = 10, resultat;

    resultat = addition(a, b);

    printf("La somme de %d et %d est : %d\n", a, b, resultat);

    return 0;
}
