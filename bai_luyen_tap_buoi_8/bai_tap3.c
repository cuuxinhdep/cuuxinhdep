//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap3(){
//int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A > B && A > C)
        printf("Max = %d", A);
    else if(B > A && B > C)
        printf("Max = %d", B);
    else if(C > A && C > B)
        printf("Max = %d", C);
}