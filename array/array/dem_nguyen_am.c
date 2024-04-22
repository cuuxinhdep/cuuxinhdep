//
// Created by PC on 4/22/2024.
//
#include "stdio.h"
int countvowel(){
//int main(){
    int n = 0;
    char s[n];
    scanf("%d", &n);
    int vowel = s[0], count = s[0];
    scanf("%s", &s);
    for(int i = 0; i < n; i ++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vowel++;
        else
            count++;
    }
    printf("%d %d", vowel, count);
}