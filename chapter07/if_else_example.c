//
// Created by PC on 4/12/2024.
//
#include "stdio.h"
int atmifelse(){
//int main() {
    printf("Ban da dang nhap thanh cong. Xin chuc mung!\n");
    printf("Ban muon su dung chuc nang nao?\n");
    printf("============function==============\n");
    printf("| 1. rut tien                    |\n");
    printf("| 2. Kiem tra so du              |\n");
    printf("| 3. chuyen khoan                |\n");
    printf("| 4. kiem tra lich su giao dich  |\n");
    printf("==================================\n");
    printf("Moi ban nhan cac lua chon 1-4  \n");

    int choose = 0;
    scanf("%d", &choose);
    if (choose >= 1 && choose <= 4) {
        if (choose == 1) {
            printf("Giao dich thanh cong. So tien con lai la 4 ti USD\n");
        } else if (choose == 2) {
            printf("SO du trong tai khoan cua ban la 7 ti USD\n");
        } else if (choose == 3) {
            printf("Ban hay nhap so tai khoan can  chuyen khoan\n");
        } else if (choose == 4) {
            printf("Danh sach cac giao dich gan nhat cua ban\n");
        }
    }else{
            printf("Lua chon cua ban khong phu hop. Moi ban nhap cac so trong pham vi tu 1 den 4");
    }
    printf("\n");
    return 0;
}