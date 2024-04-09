//
// Created by ASUS on 4/9/2024.
//
#include "stdio.h"
//int tinh_luong(){
    int main(){
        int a, b, c, d;
        printf("luong co ban:$ ");
        scanf("%d", &a);
        printf("DA:$%d\n ",12 * a / 100);
        printf("HRA:$ ");
        scanf("%d", &b);
        printf("TA:$ ");
        scanf("%d", &c);
        printf("Cac muc khac:$ ");
        scanf("%d", &d);
        int PF = 14 * a / 100,
            IT = 15 * a / 100;
        printf("luong thuc lanh: %d", a + b + c + d - (PF + IT));

}