//
// Created by ASUS on 4/11/2024.
//
#include "stdio.h"
int quydoidonvi(){
//    int main(){
    float n;
    scanf("%f", &n);
    printf("%.1f centimeters tuong duong %.1f inches\n", n, n / 2.54);
    printf("%.1f centimeters tuong duong %.1f feet", n, n / (2.54 * 12));
}