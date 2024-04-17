//
// Created by PC on 4/17/2024.
//
#include "stdio.h"
#define LEMONJUICE 2.0
#define MANGOJUICE 3.0
#define COFFEE 2.5

int coffeeshop(){
//int main(){
    int numLEMONJUICE = 0,
        numMANGOJUICE = 0,
        numCOFFEE = 0;
    float totalcost;
    int choice;
    do {
        printf("==========MENU==========\n");
        printf("|1. LEMON JUICE: %.2f$   |\n", LEMONJUICE);
        printf("|2. MANGOJUICE: %.2f$    |\n", MANGOJUICE);
        printf("|3. COFFEE: %.2f$        |\n", COFFEE);
        printf("|4. QUIT                 |\n");
        printf("======================== \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Select amount: ");
                scanf("%d", &numLEMONJUICE);
                break;
            case 2:
                printf("Select amount: ");
                scanf("%d", &numMANGOJUICE);
                break;
            case 3:
                printf("Select amount: ");
                scanf("%d", &numCOFFEE);
                break;
            case 4:
                break;
            default:
                printf("INVALID choice. Please try again\n");
        }
    } while (choice != 4);
    // caculate the totalprice
    totalcost = (LEMONJUICE * numLEMONJUICE) + (MANGOJUICE * numMANGOJUICE) + (COFFEE * numCOFFEE);
    // display
    printf("Order detail:\n");
    printf("LEMON JUICE: %d\n",numLEMONJUICE);
    printf("MANGOJUICE: %d\n", numMANGOJUICE);
    printf("COFFEE: %d\n", numCOFFEE);
    printf("Total cost: %.3f\n",totalcost);
    printf("Thanks for your order. Enjoy your drink!");
}