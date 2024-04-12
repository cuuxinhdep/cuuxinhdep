//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
int doi_hoa_thanh_thuong(){
//void main(){
    char c;
    scanf("%c", &c);
    if(c >='A' && c <= 'Z')
        printf("%c and value is %d", c + 32, c + 32);
    else
        printf("%c and value is %d",c, c);
}