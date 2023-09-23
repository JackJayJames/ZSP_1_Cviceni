#include <stdio.h>

int main(){
    double a, b, O, S;

    /*a = 5.52146;
    b = 3.7525;*/

    printf("Zadej stranu a : ");
    scanf("%lf", &a);
    printf("Zadej stranu b : ");
    scanf("%lf", &b);

    if(a > 0 && b > 0){
        O = (a + b) * 2;
        S = a * b;

        printf("Strana a = %.2f, b = %.2f\n", a, b);
        printf("Obvod O = %.2f\n", O);
        printf("Obsah S = %.2f\n", S);
    } else {
        printf("Chyba: Záporné hodnoty.\n");
    }
}