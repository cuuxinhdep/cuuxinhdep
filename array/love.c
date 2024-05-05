//
// Created by ASUS on 5/4/2024.
//
#include "stdio.h"
#include "string.h"
int check1(char c[]){
    if (strcmp(c, "xinh") == 0) {
        printf("CT");
        return 1;
    } else return 0;
}
int totinh(char c){
    if(c == 'y' || c =='y'){
        return 1;
    } else  return 0;
}

void yeuhetminh(){
    printf("Minh di du nhe\n");
    printf("Anh muon du em\n");
    printf("<3<3<3<3\n");
}

void brokenheart(){
    int choose;
    printf("may chon thung xop hay dong hom?\n");
    printf("1. dong hom\n");
    printf("2. that ra em yeu anh\n");
    scanf("%d", &choose);
    switch(choose) {
        case 1:
            printf("OK");
            break;
        case 2:
            yeuhetminh();
            break;
    }
}
int love(){
//int main(){
char c[10];
char test;
    printf("Nhap tinh cach hoac dac diem cua doi tuong");
    scanf("%9s", &c);
    if(check(c)){
        printf("Em co yeu anh ko?(y/n)");
        getchar();
        scanf("%c", &test);
        if(totinh(test)){
            yeuhetminh();
        } else  {
            brokenheart();
        }
    }
}