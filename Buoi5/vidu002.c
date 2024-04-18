//
// Created by PC on 4/17/2024.
//
#include <stdio.h>
int vidu002(){
//void main(){
    int i, j, max;
    printf("Please enter the maximum value \n");
    printf("For which a table can be printed: ");
    scanf("%d", &max);
    for(i = 0, j = max; i <= max; i++, j--)
        printf("%d + %d = %d ", i, j, i + j);
}