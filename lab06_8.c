//
// Created by PC on 4/24/2024.
//
#include "stdio.h"
int lab06_8(){
//int main(){
    float diem[5][6];
    for (int i = 0; i < 5; ++i) {
        printf("Nhap diem cho sinh vien thu %d:\n", i + 1);
        for (int j = 0; j < 6; ++j) {
            printf("Nhap diem mon hoc %d:", j + 1);
            scanf("%d", &diem[i][j]);
        }
    }
    printf("\nDanh sach diem va diem trung binh cua cac hoc vien\n");
    printf("+~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~+\n");
    printf("| Hoc vien | Mon hoc 1 | Mon hoc 2 | Mon hoc 3 | Mon hoc 4 | Mon hoc 5 | Mon hoc 6 | Diem TB |\n ");
    printf("+~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~+\n");
    for (int i = 0; i < 5; ++i) {
        float tongDiem = 0;
        printf("|   %d   ", i + 1);
        for (int j = 0; j < 6; ++j) {
            printf("| %9.2f ", diem[i][j]);
            tongDiem += diem[i][j];
        }
        float   diemTrungBinh = tongDiem / 6;
        printf("| %7.f |\n", diemTrungBinh);
    }
    printf("+~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~~~+~~~~~~~~~+\n");

}
