//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
int bai2_skype(){
//int main(){
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }
    float b[10] = {0};
    for (int i = 0; i < 5; ++i) {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("%.1f ", b[i]);
    }
}