//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
//int bai_tap10(){
int main(){
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("       MENU      \n");
    printf("=================\n");
    printf("+                \n");
    printf("-                \n");
    printf("*                \n");
    printf(":                \n");
    printf("=================\n");
    printf("Chon: \n");
    char select = '-';
    fflush(stdin);
    scanf("%c", &select);
    switch (select) {
        case '+':
            printf("Tong = %d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Hieu = %d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Tich = %d * %d = %lld", num1, num2, (long long)num1 * num2);
            break;
        case ':':
            printf("Thuong = %d / %d = %.2f", num1, num2, (float)num1 / num2);
            break;
    }
}