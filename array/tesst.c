//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
int tesst(){
//int main(){
    char a[26];
    for(int i = 65, j = 0; i < 91; ++i){
        a[j] = i;
        printf("%c ", a[j]);
    }

}