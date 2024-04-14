//
// Created by ASUS on 4/14/2024.
//
#include "stdio.h"
int bai4(){
//int main(){
    int a, tc;
    scanf("%d", &a);    // nhap tien luong
    int type = 0;
    scanf("%d", &type);
    if(type >= 1 && type <= 3){
        switch (type) {
            case 1:
                tc = 300;
                break;
            case 2:
                tc = 250;
                break;
            case 3:
                tc = 100;
                break;
        }
    }
    a += tc;
    printf("Luong cua ban la:%d", a);
}