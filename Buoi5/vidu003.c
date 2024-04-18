//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
int vidu003(){
//void main(){
    int i, j, k;
    i = 0;
    printf("Enter no. of rows: ");
    scanf("%d", &i);
    printf("\n");
    for(j = 0; j < i; j++){
        printf("\n");
        for(k = 0; k <= j; k++){
            printf("*");
        }
    }
}