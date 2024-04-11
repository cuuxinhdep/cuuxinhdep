//
// Created by ASUS on 4/11/2024.
//
#include "stdio.h"
//int ho_ten(){
int main(){
    char ho[50], ten[50];
    printf("Nhap ho cua ban: ");
    scanf("%[^\n]S", &ho);
    printf("Nhap ten cua ban: ");
    scanf("%[^\n]S", &ho);
    fflush(stdin);
    printf("Ho ten cua ban la: %s %s",ho, ten);
}
