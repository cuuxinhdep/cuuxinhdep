//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
//int test(){
    int main(){
    int year, bizDone;
    scanf("%d%d", &year, &bizDone);
    if(year >= 10 || bizDone >= 1000 && year >= 3)
        printf("Thuong nghi 10 thang van co luong");
    else
        printf("Ve lam them di!");
}