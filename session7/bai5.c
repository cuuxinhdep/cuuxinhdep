//
// Created by ASUS on 4/14/2024.
//
#include "stdio.h"
int bai5(){
//int main(){
    int a;
    scanf("%d", &a);
    if(a >= 75)
        printf("loai A");
    else if(a >= 60)
        printf("loai B");
    else if(a >= 45)
        printf("loai C");
    else if(a >= 35)
        printf("loai D");
    else
        printf("loai E");
}