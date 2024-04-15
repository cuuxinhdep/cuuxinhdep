//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap6(){
//int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int maxValue = a;
    if((a * a == b * b + c * c)
        || (b * b == c * c + a * a)
        || (c * c == a * a + b * b)){
        if(b > maxValue)
            maxValue = b;
        if(c > maxValue)
            maxValue = c;
    }
    printf("Day la tam giac vuong co canh huyen la:%d", maxValue);
}