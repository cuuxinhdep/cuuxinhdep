//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
//int vidu7(){
void main(){
    int x, y;
    x = y = 0;
    printf("enter x: ");
    scanf("%d", &x);
    if(x < 10) {
        printf("Value of y: ");
        scanf("%d", &y);
        if(y <= 30)
            printf("The value of y is:%d", y);
        else
            printf("INVALID");
    }
    else
        printf("Unidentified");

}