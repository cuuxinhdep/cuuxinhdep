//
// Created by ASUS on 5/6/2024.
//
#include "stdio.h"
int mang(int n,int a[]){
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

int findmaxElement(int n, int a[]){
    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if(a[i] >= max){
            max = a[i];
        }
    }
    return max;
}

int findminElement(int n, int a[]){
    int min = a[0];
    for (int i = 0; i < n; ++i) {
        if(a[i] <= min){
            min = a[i];
        }
    }
    return min;
}
//int luyentap5(){
int main(){
int n;
    scanf("%d", &n);
    int a[n];
    mang(n,a);
    printf("%d\n", findmaxElement(n, a));
    printf("%d", findminElement(n,a));
}