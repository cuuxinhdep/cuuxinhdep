//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
int vidu3(){
//int main(){
    int year;
    printf("\nPlease enter a year:");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("\n%d is a leap year!", year);
    else
        printf("\n%d is not a leap year :(");
}