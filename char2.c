
#include <stdio.h>

int main () {
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];

    printf("podaj znak: ");
    scanf("%c", &znak);
    printf("podaj ciąg znakowy: ");
    scanf("%s", ciag_znakow);
    printf("podaj liczbę całkowitą: ");
    scanf("%i", &wartosc_calkowita);
    printf("podaj liczbę wymierną: ");
    scanf("%lf", &wartosc_wymierna);

    printf("\n");
    printf("znak = %c,\nciąg znakowy = %s,\n"
           "liczba całkowita = %i,\nliczba wymierna = %lf",
           znak,
           ciag_znakow,
           wartosc_calkowita,
           wartosc_wymierna
    );

    return 0;

}
