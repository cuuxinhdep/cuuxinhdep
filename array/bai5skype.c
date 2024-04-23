//
// Created by ASUS on 4/23/2024.
//
#include "stdio.h"
#include "math.h"
//int bai5skype(){
int snt(int n){
    for (int i = 2; i <= sqrt(n) ; ++i){
        if(!(n % i)) return 0;
    }
    return n > 1;
}

int main() {
    int a[5];
    int count = 0;
    while (count < 5){
        printf("Nhap so thu %d", count + 1);
        scanf("%d", &a[count]);
        if(!snt(a[count])) continue;
        ++count;
        }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < 5; ++i) {
        if(a[i] >= max)
            max = a[i];
        if(a[i] <= min)
            min = a[i];
    }
        printf("max:%d \nmin: %d", max, min);
    }