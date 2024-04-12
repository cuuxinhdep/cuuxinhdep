//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
int test2(){
//void main(){
     char c;
    scanf("%c", &c);
    if(c >= 'a' && c <='z' )
        printf("%c", c - 32);
    else
        printf("%c", c);
}
