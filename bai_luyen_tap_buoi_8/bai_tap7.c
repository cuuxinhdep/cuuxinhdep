//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int baitap_7(){
//int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    if(num1 % num2 == 0)
        printf("%d la uoc cua %d", num2, num1);
    else if(num2 % num1 == 0)
        printf("%d la uoc cua %d", num1, num2);
    else
        printf("Khong so nao la uoc cua nhau");
}