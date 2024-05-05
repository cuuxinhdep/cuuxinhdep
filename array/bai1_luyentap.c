//
// Created by ASUS on 5/5/2024.
//
#include "stdio.h"
int chuvi(int a, int b){
    return (a + b) * 2;
}

int dientich(int a, int b){
    return a * b;
}
    int luyentap1(){
//int main(){
int a, b;
    printf("Nhap chieu dai: ");
    scanf("%d", &a);
    printf("Nhap chieu rong: ");
    scanf("%d", &b);
    printf("%d\n", chuvi(a,b));
    printf("%d ", dientich(a, b));
}