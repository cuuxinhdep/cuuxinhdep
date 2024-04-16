//
// Created by PC on 4/15/2024.
//
#include "stdio.h"

int bai_tap2(){
//int main() {
    char ch;
    printf("Nhap vao mot chu trong bang Alphabet(a-Z, a-z): ");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z')
        printf("Ky tu '%c' la ki tu thuong", ch);
    else if(ch >= 'A' && ch <= 'Z')
        printf("Ky tu '%c' la ky tu hoa", ch);
    else if (ch >= '0' && ch <= '9')
        printf("Ky tu '%c' la chu so!", ch);
    else
        printf("Ky tu '%c' khong nam trong bang Alphabet va khong phai chu so", ch);
}