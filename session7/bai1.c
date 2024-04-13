//
// Created by PC on 4/13/2024.
//
#include "stdio.h"
int bai1(){
//int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a % b == 0)
        printf("YES");
    else
        printf("NO");
}