//
// Created by ASUS on 4/11/2024.
//
#include "stdio.h"
int iResult(){
//int main(){
    int a = 10, b = 8, c = 6, d = 5, e = 2;
    printf("%d\t", a - b - c - d);
    printf("%d\n", a - b + c - d);
    printf("%d\t", a + b / c / d);
    printf("%d\n", a + b / c * d);
    printf("%d\t", a / b * c * d);
    printf("%d\n", a % b / c * d);
    printf("%d\t", a % b % c % d);
    printf("%d\n", a - (b - c) - d);
    printf("%d\t", (a - (b - c) - d));
    printf("%d\n", a % (b % c) * d * e);
    printf("%d\t", a + (b - c) * d - e);
    printf("%d\n", (a + b) * c + d * e);
    printf("%d", (a + b) * (c / d) % e);






}