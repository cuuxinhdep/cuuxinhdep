//
// Created by ASUS on 4/9/2024.
//
#include "stdio.h"
int area_perimeter(){
//    int main(){
        int l, w;
        scanf("%d%d",&l, &w);
        printf("area: %d ",(l+w)*2);
        printf("perimeter: %lld ",(long long)l*w);
}