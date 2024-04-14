//
// Created by ASUS on 4/14/2024.
//
#include "stdio.h"
int bai01(){
//int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if(x < 2000 || x > 3000)
        printf("%d\t",x);
    if(y > 100 && y < 500)
        printf("%d", y);
}