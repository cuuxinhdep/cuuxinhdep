//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
int doi_hoa_thanh_thuong(){
//void main(){
    char c;
    scanf("%c", &c);
    if(c >='A' && c <= 'Z')
        printf("%c", c + 32);
    else
        printf("%c", c);
}