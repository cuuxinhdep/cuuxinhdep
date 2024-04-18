//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
int vidu007(){
//void main(){
    int num;
    for(num = 1; num <= 10; num++){
        if(num % 9 == 0)
            continue;
        printf("%d\t", num);
    }
}