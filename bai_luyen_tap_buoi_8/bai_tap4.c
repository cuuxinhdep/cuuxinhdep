//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap4(){
//int main(){
    char vowel;
    printf("Nhap ky tu: ");
    vowel = getchar();
    switch (vowel) {
        case 'A':
        case 'a':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("'%c' la nguyen am", vowel);
            break;
        default:
            printf("'%c' la phu am", vowel);

    }
}