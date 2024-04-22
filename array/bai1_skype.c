//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
int sochan(){
//int main(){
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if( i % 2 == 0)
        printf("%d ", a[i]);
    }
}