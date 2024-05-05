//
// Created by ASUS on 5/5/2024.
//
#include "stdio.h"

int check(int n){
    if(n % 50 == 0 ) return 1;
    return 0;
}
    int luyentap3(){
//int main(){
    int n1, n2;
    printf("Nhap n1: ");
    scanf("%d", &n1);
    printf("Nhap n2: ");
    scanf("%d", &n2);
    for (int i = n1; i <= n2; ++i) {
        if(check(i)) printf("%d\n", i);
    }
}