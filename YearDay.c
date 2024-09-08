//
// Created by colorcard on 2024/9/8.
//

#include <stdio.h>

void monthday(int year,int yearday,int *pmonth,int *pday){
    int leap,i;
    int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                  {0,31,29,31,30,31,30,31,31,30,31,30,31}};

    leap=(year%4==0 && year%100!=0)||year%400==0;

    for(i=0;yearday>a[leap][i];i++){
        yearday=yearday-a[leap][i];
    }

    *pmonth=i;
    *pday=yearday;
}

int main(){
    int a,b,month,day;

    printf("输入年份和第几天：\n");
    scanf("%d %d",&a,&b);
    monthday(a,b,&month,&day);

    printf("%d-%d-%d",a,month,day);

    return 0;
}