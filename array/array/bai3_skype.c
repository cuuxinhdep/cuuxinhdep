//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
//int min_max(){
int main(){
    int a[10];
//    nhap gia tri cho mang
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
//    tim min max
    int min = a[0], max = a[0];
    for (int i = 0; i < 10; ++i) {
        if(a[i] >= max)
            max = a[i];
        if(a[i] <= min)
            min = a[i];
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 10; ++i) {
        if(a[i] == max)
            ++count1;
        if(a[i] == min)
            ++count2;
    }
    int sum = 0, avarage = 0;
    sum = max * count1 + min * count2;
    avarage = sum / (count1 + count2);
    printf("max: %d\nmin: %d", max, min);
    printf("\nso lan max: %d\nso lan min: %d", count1, count2);
    printf("\nsum:%d \navarage:%d");
}