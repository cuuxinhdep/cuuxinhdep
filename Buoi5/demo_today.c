//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
int demo_today(){
//int main(){
    int i;

    printf("=== demo for ===\n");
    for(i = 0; i < 10; ++i){
        printf("i = %d \t", i);
    }

    printf("\n\n ==== demo while ====\n");
    i = 0;
    while (i < 10){
        printf("i = %d\t", i);
        i++;
    }

    printf("\n\n ==== demo do...while ====\n");
    i = 0;
    do {
        printf("i = %d\t", i);
        i++;
    } while (i < 10);
}