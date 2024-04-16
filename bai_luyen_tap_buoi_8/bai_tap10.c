//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap10(){
//int main(){
   float m;
    printf("Nhap don vi:");
    scanf("%f", &m);
    printf("Chon don vi doi: \n");
    printf("1. mm\n");
    printf("2. cm\n");
    printf("3. dm\n");
    printf("4. km\n");
   int convert;
    scanf("%d", &convert);
    if(convert >= 1 && convert <= 4) {
        switch (convert) {
            case 1:
                printf("Do dai theo mm la: %fmm", m * 1000);
                break;
            case 2:
                printf("Do dai theo cm la:%fcm", m * 100);
            case 3:
                printf("Do dai theo dm la:%fdm", m * 10);
                break;
            case 4:
                printf("Do dai theo km la:%fkm", m / 1000);
                break;
            default:
                printf("So ban chon khong nam trong lua chon cho phep");
        }
    }else
        printf("Xin moi chon lai theo so tu 1 - 4");
}