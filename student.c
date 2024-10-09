//
// Created by colorcard on 2024/10/9.
//

#include "stdio.h"

int main(){
    int n,i;

    struct student{
        int num;
        char name[10];
        double math;
        double english;
        double chinese;
        double avr;
    }a[50],tem;

    printf("请输入n个学生：");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("现在是第%d个学生\n请输入Ta的编号:",i+1);
        scanf("%d",&a[i].num);
        printf("请输入Ta的名字:");
        scanf("%s",a[i].name);
        printf("请输入Ta的语文成绩:");
        scanf("%lf",&a[i].chinese);
        printf("请输入Ta的数学成绩:");
        scanf("%lf",&a[i].math);
        printf("请输入Ta的英语成绩:");
        scanf("%lf",&a[i].english);

        a[i].avr=(a[i].chinese+a[i].math+a[i].english)/3;

    }

    int k,j;
    for(k=1;k<n;k++){
        for(j=0;j<n-k;j++){
            if(a[j].avr<a[j+1].avr){

                tem=a[j];
                a[j+1]=a[j];
                a[j]=tem;

            }
        }
    }

    printf("编号\t 姓名\t 平均成绩\t\n");
    for(i=0;i<n;i++){
        printf("%d\t %s\t %lf\t\n",a[i].num,a[i].name,a[i].avr);
    }


    return 0;
}

