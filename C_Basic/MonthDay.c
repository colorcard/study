//
// Created by colorcard on 2024/9/8.
//
#include <stdio.h>

int monthday(int year,int month,int day){
    int leap,i;
    int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                  {0,31,29,31,30,31,30,31,31,30,31,30,31}};

    leap=(year%4==0 && year%100!=0)||year%400==0;

    for(i=0;i<month;i++){
        day=day+a[leap][i];
    }

    return day;
}

int main(){
    int year,month,day;
    printf("请输入年份与月份:\n");
    scanf("%d.%d.%d",&year,&month,&day);

    printf("这天是%d年的第%d天",year, monthday(year,month,day));

    return 0;
}