//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
int atm_2(){
//int main(){
    int pin = 1234,         // ma PIN mac dinh
        balance = 1000,     // so du ban dau
        maxAttemps = 3,     // so lan dang nhap sai toi da
        option;

    int enteredPin,
        withdrawAmaount;

    printf("Chao mung ban den ATM!\n");

    int attempts = 0;       // so lan da dang nhap sai
    while (attempts < maxAttemps){
        printf("Nhap ma so pin cua ban (Con lai %d lan thu): ", maxAttemps - attempts);
        scanf("%d", &enteredPin);

        // kiem tra ma PIN
        if(enteredPin == pin){
            printf("Dang nhap thanh cong\n");
            break;
        } else{
            printf("Ma PIN khong hop le\n");
            attempts++;
        }
    }

    if(attempts == maxAttemps) {
        printf("Ban da nhap sai qua so lan cho phep. Khoa the\n");
        return 1; // ket thuc chuong trinh
    }
    while(1){
        printf("Lua chon cua ban:\n");
        printf("1. kiem tra so du\n");
        printf("2. Rut tien\n");
        printf("3. Ket thuc\n");

        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("So du cua ban: %d VND\n", balance);
                break;
            case 2:
                printf("Nhap so tien muon rut: ");
                scanf("%d", &withdrawAmaount);
                if (withdrawAmaount > balance){
                    printf("So du khong du de rut tien!\n");
                }else{
                    balance -= withdrawAmaount;
                    printf("Ban da rut %d VND. So du con lai: %d VND\n", withdrawAmaount, balance);
                }
                break;
            case 3:
                printf("Cam on ban da su dung dich vu ATM. Hen gap lai\n");
                return 0; // ket thuc chuong trinh
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}

