#include <stdio.h>

// Fonction pour l'addition
int addition(int x, int y) {
    return x + y;
}

// Fonction pour la soustraction
int soustraction(int x, int y) {
    return x - y;
}

// Fonction pour la multiplication
int multiplication(int x, int y) {
    return x * y;
}

// Fonction pour la division
float division(int x, int y) {
    if (y == 0) {
        printf("Erreur : division par zéro !\n");
        return 0;
    }
    return (float)x / y;
}

int main() {
    int choix;
    int a, b;
    float resultat;

    printf("Choisissez une opération :\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    switch (choix) {
        case 1:
            resultat = addition(a, b);
            printf("Résultat : %d + %d = %.2f\n", a, b, resultat);
            break;
        case 2:
            resultat = soustraction(a, b);
            printf("Résultat : %d - %d = %.2f\n", a, b, resultat);
            break;
        case 3:
            resultat = multiplication(a, b);
            printf("Résultat : %d * %d = %.2f\n", a, b, resultat);
            break;
        case 4:
            resultat = division(a, b);
            if (b != 0) {
                printf("Résultat : %d / %d = %.2f\n", a, b, resultat);
            }
            break;
        default:
            printf("Erreur : choix invalide !\n");
    }

    return 0;
}
