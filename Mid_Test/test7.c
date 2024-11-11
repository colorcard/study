//
// Created by colorcard on 24-11-11.
//

#include <stdio.h>

struct student{
    int num;
    int chinese;
    int math;
    int english;
    int sum;
};

int main(){
    int n;
    scanf("%d",&n);

    struct student students[n];

    for (int i=0;i<n;i++) {
        scanf("%d %d %d", &students[i].chinese, &students[i].math, &students[i].english);
        students[i].num=i+1;
        students[i].sum=students[i].chinese+students[i].math+students[i].english;
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (students[j].sum<students[j+1].sum) {
                struct student temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }else if(students[j].sum==students[j+1].sum){
                if(students[j].chinese<students[j+1].chinese){
                    struct student temp=students[j];
                    students[j]=students[j+1];
                    students[j+1]=temp;
                }else if(students[j].chinese==students[j+1].chinese){
                    if(students[j].num>students[j+1].num){
                        struct student temp=students[j];
                        students[j]=students[j+1];
                        students[j+1]=temp;
                    }
                }
            }
        }
    }

    for (int i=0;i<5;++i) {
        printf("%d %d\n",students[i].num,students[i].sum);

    }


    return 0;
}

