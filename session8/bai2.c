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
            printf("Ada");
            break;
        case 'a':
            printf("Ada");
            break;
        case 'B':
            printf("Basic");
            break;
        case 'b':
            printf("Basic");
            break;
        case 'C':
            printf("COBOL");
        case'c':
            printf("COBOL");
            break;
        case 'D':
            printf("dBASE III");
            break;
        case 'd':
            printf("dBASE III");
            break;
        case 'F':
            printf("Fortan");
            break;
        case 'f':
            printf("Fortan");
            break;
        case 'P':
            printf("Pascal");
            break;
        case 'p':
            printf("Pascal");
            break;
        case 'V':
            printf("Visual C++");
            break;
        case 'v':
            printf("Visual C++");
            break;
        default:
            printf("INVALID");
            break;
    }
}