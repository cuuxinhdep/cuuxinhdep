//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
int min_max(){
//int main(){
    int a[5];
//    nhap gia tri cho mang
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }
//    tim min max
    int min = a[0], max = a[0];
    for (int i = 0; i < 5; ++i) {
        if(a[i] >= max)
            max = a[i];
        if(a[i] <= min)
            min = a[i];
    }
//    for (int i = 0; i < 5; ++i) {
//        if(a[i] <= min)
//            min = a[i];
//    }
    printf("max: %d\nmin: %d", max, min);
}