//
// Created by ASUS on 4/14/2024.
//
#include "stdio.h"
int bai03(){
//void main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int maxVaulue = a;
    if(b > maxVaulue)
        maxVaulue = b;
    if(c > maxVaulue)
        maxVaulue = c;
    printf("%d", maxVaulue);

}