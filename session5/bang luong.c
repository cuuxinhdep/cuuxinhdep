//
// Created by ASUS on 4/11/2024.
//
#include "stdio.h"
int bangluong(){
//int main(){
    int basic, daper;
    float bonper, loanet;
    char name[10];
//    salary = basic + basic * daper / 100 + bonper * basic / 100 - loanet
    printf("Ten cua ban: ");
    scanf("%[^\n]s", &name);
    printf("Basic:$ ");
    scanf("%d", &basic);
    printf("Daper:$ ");
    scanf("%d", &daper);
    printf("Bonper:$ ");
    scanf("%f", &bonper);
    printf("Loanet:$ ");
    scanf("%f", &loanet);
    float salary = basic + basic * daper / 100 + bonper * basic / 100 - loanet;
    printf("==============Bang luong==============\n");
    printf("Name:%s \tBasic:$%d \tSalary:$%f", name, basic, salary);

}