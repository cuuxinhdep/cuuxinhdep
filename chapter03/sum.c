//
// Created by ASUS on 4/9/2024.
//
#include "stdio.h"
int sum_avg(){
//    int main(){
        float a, b, c;
    printf("vat ly:");
    scanf("%f", &a);
    printf("hoa hoc: ");
    scanf("%f", &b);
    printf("sinh hoc: ");
    scanf("%f",&c);
    printf("avg: %.1f\nsum: %.1f", (a+b+c)/3, a+b+c);

}