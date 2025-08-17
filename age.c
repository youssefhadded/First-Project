#include <stdio.h>

int main() {
    char nom[50];
    int age;

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Bonjour %s, vous avez %d ans !\n", nom, age);

    return 0;
}
