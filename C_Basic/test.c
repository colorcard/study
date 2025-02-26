# include <stdio.h>

struct student {
    int num;
    char name[10];
    int math, english, computer;
    double average;
};

double count_average(struct student s);

int main() {
    int i, j, n, index;


    struct student students[50], temp;

    n=10;

    for (i = 0; i < n; i++) {
        printf("Input the info of No.%d:\n", i + 1);
        printf("number:");
        scanf("%d", &students[i].num);
        printf("name:");
        scanf("%s", students[i].name);
        printf("math score:");
        scanf("%d", &students[i].math);
        printf("english score:");
        scanf("%d", &students[i].english);
        printf("computer score:");
        scanf("%d", &students[i].computer);
        students[i].average = count_average(students[i]);
    }


    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = i + 1; j < n; j++) {

            if (students[j].average > students[index].average) {
                index = j;
            }
        }


        temp = students[index];
        students[index] = students[i];
        students[i] = temp;
    }

    printf("The Max Average Student Info:\n");
    printf("num:%d, name:%s, average:%.2lf\n", students[0].num, students[0].name, students[0].average);
    printf("The Min Average Student Info:\n");
    printf("num:%d, name:%s, average:%.2lf\n", students[n - 1].num, students[n - 1].name, students[n - 1].average);

    return 0;
}

double count_average(struct student s)
{
    return (s.math + s.english + s.computer) / 3.0;
}