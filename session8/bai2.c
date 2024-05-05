//
// Created by ASUS on 4/14/2024.
//
#include "stdio.h"
int bai02(){
//void main(){
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'A':
        case 'a':
            printf("Ada");
            break;

        case 'B':
        case 'b':
            printf("Basic");
            break;
        case 'C':
        case'c':
            printf("COBOL");
            break;
        case 'D':
        case 'd':
            printf("dBASE III");
            break;
        case 'F':
        case 'f':
            printf("Fortan");
            break;
        case 'P':
        case 'p':
            printf("Pascal");
            break;
        case 'V':
        case 'v':
            printf("Visual C++");
            break;
        default:
            printf("INVALID");
            break;
    }
}