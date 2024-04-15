//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap1(){
//int main(){
    char c;
    printf("Nhap vao 1 ky tu: ");
//    scanf("%c", &c);
    c = getchar();
    printf("Ma ASCII cua ky tu '%c' la: %d", c, c);
}