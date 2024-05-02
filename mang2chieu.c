//
// Created by PC on 4/24/2024.
//
#include "stdio.h"
//int mang2chieu(){
int main(){
    int a[3][4];
    for (int i = 0; i < 3; ++i) { //hang
        for (int j = 0; j < 4; ++j) { //cot
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {   //hang
        for (int j = 0; j < 4; ++j) {   //cot
            printf("a[%d][%d]: %d\n",i ,j, a[i][j]);
        }
    }
}