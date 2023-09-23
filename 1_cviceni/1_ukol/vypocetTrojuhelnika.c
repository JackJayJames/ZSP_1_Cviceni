#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double obvod_trojuhelnika(double a, double b, double c){
    return a + b + c;;
}
double obsah_trojuhelniku(double a, double b, double c){
    double pulObvod = obvod_trojuhelnika(a, b, c) / 2;
    return sqrt(pulObvod * (pulObvod - a) * (pulObvod - b) * (pulObvod - c));
}
bool test_rovnostranny_trojuhelnik(double a, double b, double c){
    return (a == b) && (b == c) && (c == a);
}
bool test_rovnorameny_trojuhelnik(double a, double b, double c){
    return (!test_rovnostranny_trojuhelnik(a, b, c)) && ((a == b) || (b == c) || (c == a));
}

void vypocetTrojuhelnik(){
    int a, b, c;
    double obsah, pulObvod, obvod, x;
    bool jeRovnostrany, jeRovnorameny;

    printf("Strany trojúhelníka\n");
    printf("Zadej stranu a = ");
    scanf("%d", &a);
    printf("Zadej stranu b = ");
    scanf("%d", &b);
    printf("Zadej stranu c = ");
    scanf("%d", &c);

    obvod = obvod_trojuhelnika(a, b, c);
    obsah = obsah_trojuhelniku(a, b, c);


    printf("a = %d ; b = %d ; c = %d\n", a, b, c);
    printf("obvod = %f\n", obvod);
    printf("polovina obvodu = %f\n", pulObvod);
    printf("obsah = %f\n", obsah);
    printf("je rovnostranny = %s\n", test_rovnostranny_trojuhelnik(a, b, c) == false ? "Ne" : "Ano");
    printf("je rovnoramenny = %s\n", test_rovnorameny_trojuhelnik(a, b, c) ? "Ne" : "Ano");
}

int main(){
    vypocetTrojuhelnik();
}