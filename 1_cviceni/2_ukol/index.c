//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>

#include <stdio.h>

/*
void ukazka_jedna(){
    int r1, r2;

    printf("Zadej rok: ");
}
void ukazka_dva(){
    int pocet_procent;

    pocet_procent = 75;
    printf("%d%%", pocet_procent);
}
*/
void ukazka_tri(){
    int r, m, d;
    scanf("%d-%d-%d", &r, &m, &d);
    printf("%02d.%02d.%02d\n", r, m, d);
}

int main(){
    //ukazka_jedna();
    //ukazka_dva();
    ukazka_tri();
}