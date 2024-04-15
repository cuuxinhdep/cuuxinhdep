//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap9(){
//int main(){
//sap xep tang dan
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && b > c)
        printf("%d %d %d", c, b, a);
    else if(b > c && c > a)
        printf("%d %d %d", a, c, b);
    else if(a > c && c > b)
        printf("%d %d %d", b, c, a);
    else if(c > b && b > a)
        printf("%d %d %d", a, b, c);
    else if(c > a && a > b)
        printf("%d %d %d", b, a, c);
    else
        printf("%d %d %d", c, a, b);



}