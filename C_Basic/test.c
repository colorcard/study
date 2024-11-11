//
// Created by colorcard on 24-11-11.
//


#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int is_valid_square(char B[4][5]) {
    return (tolower(B[0][0]) == tolower(B[1][2]) &&
            tolower(B[0][1]) == tolower(B[3][3]) &&
            tolower(B[1][1]) == tolower(B[2][3]) &&
            tolower(B[2][2]) == tolower(B[3][0]));
}
int main()
{
    int T;
    char A[4][5];
    scanf("%d",&T);


    while(T--)
    {
        int yes=0;


        for(int i=0;i<4;i++){
            scanf("%4s",A[i]);// 读取4个字符的字符串，避免缓冲区溢出
        }

        int b[3]={1,2,3};
        qsort(b,3,sizeof(int),cmp);

        for(int n=1;n<4;j++)
        {
            A[n][p]=A[b[n]][p];
            if(is_valid_square(A))
            {
                yes=1;
                break;
            }

        }

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    for(int l=0;l<4;l++)
                    {


                        for(int p=0;p<4;p++){

                            A[0][p]=A[0][(p+i)%4];
                            A[1][p]=A[1][(p+j)%4];
                            A[2][p]=A[2][(p+k)%4];
                            A[3][p]=A[3][(p+l)%4];

                        }



                    }
                }
            }
        }



        if(yes)
            printf("Yes\n");
        else
            printf("No\n");
    }





}