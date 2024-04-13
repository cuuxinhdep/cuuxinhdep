//
// Created by PC on 4/13/2024.
//
#include "stdio.h"
//int bai3(){
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    (a - b == a || a - b == b)? printf("Hien gia tri bang %d", a -b) : printf("Hien khong bang gia tri nao da duoc nhap");
}