#include <stdio.h>



int main () {
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;

    scanf("%c%i%lf",
            &znak,
            &wartosc_calkowita,
            &wartosc_wymierna);
    printf(
            "znak = %c,"
            "\n liczba całkowita = %i,"
            "\n liczba wymierna = %lf",
    znak,
    wartosc_calkowita,
    wartosc_wymierna
    );

    return 0;

}
