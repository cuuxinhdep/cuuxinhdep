//
// Created by PC on 4/22/2024.
//
#include <stdio.h>
int testcase(){
//void main(){
    int arr[5];
    for(int i = 0; i < 5; i ++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < 5; ++ i) {
        sum += arr[i];
    }
    printf("%d", sum);
}