//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap5(){
//int main(){
    printf("        MENU            \n");
    printf("===================     \n");
    printf("1. CF                   \n");
    printf("2. C                    \n");
    printf("3. HDJ                  \n");
    printf("4. DreamWeaver          \n");
    printf("5. RDBMS                \n");
    printf("6. Learn Java By Example\n");
    printf("===================     \n");
    printf("Chon: ");
    int choose = 0;
    scanf("%d", &choose);
    if(choose >= 1 && choose <= 6){
        switch (choose) {
            case 1:
                printf("Ban chon CF");
                break;
            case 2:
                printf("Ban chon C");
                break;
            case 3:
                printf("Ban chon HDJ");
                break;
            case 4:
                printf("Ban chon DreamWeaver");
                break;
            case 5:
                printf("Ban chon RDBMS");
                break;
            case 6:
                printf("Ban chon Learn Java By Example");
                break;
            default:
                printf("Hay chon so tu 1 - 6");
        }
    }else
        printf("Hay chon tu 1 - 6");
}