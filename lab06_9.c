//
// Created by PC on 4/24/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "math.h"
int lab06_9(){
int snt(int n){
    for (int i = 2; i < sqrt(n); ++i) {
        if(!( n % i)) return 0;
    }
    return n > 1;
}

//int main(){
    int a[20];
    srand(time(NULL));
    int count = 0;
    while (count < 20){
        int RandomNumbers = rand() % 200;
       if(snt(RandomNumbers)){
           a[count] = RandomNumbers;
           printf("%d ", a[count]);
           count ++;
       }
    }
    return 0;
}