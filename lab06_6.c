//
// Created by PC on 4/24/2024.
//
#include "stdio.h"
#include "string.h"

#define MAX_NAME_LEGTH 30
#define NUM_STUDENT 5

int lab06_6(){
//int main() {
    char studentname[NUM_STUDENT][MAX_NAME_LEGTH + 1];
    printf("Nhap danh sach ten 5 hoc vien:\n");
    for (int i = 0; i < NUM_STUDENT; ++i) {
        printf("Nhap ten hoc vien thu %d:", i + 1);
        fflush(stdin);
        scanf("%30[^\n]s", &studentname[i]);
    }
    printf("Danh sach ten hoc vien:\n");
    for (int i = 0; i < NUM_STUDENT; ++i) {
        printf("%d. %s\n", i + 1, studentname[i]);
    }
}