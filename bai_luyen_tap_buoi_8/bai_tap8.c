//
// Created by PC on 4/15/2024.
//
#include "stdio.h"
int bai_tap8(){
//int main(){
    int a, b, c, dt;
    scanf("%d%d%d", &a, &b, &c);
    dt = b * b - 4 * a * c;
    printf("PT co dang: %dx^2 + %dx + %d = 0\n", a, b, c);
    if(dt > 0)
        printf("Pt co 2 nghiem phan biet");
    else if(dt < 0)
        printf("Pt vo nghiem");
    else
        printf("Pt co nghiem kep");
}