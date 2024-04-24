//
// Created by PC on 4/24/2024.
//
#include "stdio.h"
int lab06_7(){
//int main(){
    char character[10];
    int i = 0;
    printf("Nhap toi da 10 ky tu( Nhap Enter de ket thuc:\n");
    while (i < 10) {
        char c = getchar();
        if(c == '\n'){
            break;
        }
        character[i] = c;
        i++;
    }
    printf("Danh sach ky tu da nhap va ma ASCII tuong ung: \n");
    for (int j = 0; j < i; ++j) {
        printf("%c: %d\n", character[j], character[j]);
    }
}