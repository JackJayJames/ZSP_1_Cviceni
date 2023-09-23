#include <stdio.h>

int main(){
    const float PI = 3.14;
    float r, obvod, obsah;

    printf("Polomer kruznice r = ");
    scanf("%f", &r);

    obvod = 2 * PI * r;
    obsah = PI * r * r;

    printf("r = %.2f\n", r);
    printf("O = %.2f\n", obvod);
    printf("S = %.2f\n", obsah);
}