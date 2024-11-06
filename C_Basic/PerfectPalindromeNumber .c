//
// Created by colorcard on 24-11-6.
//https://oj.xtu.edu.cn/problem.php?cid=1005&pid=1
//


#include <stdio.h>

const int N1=11,N2=1111,N3=1001;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){

        int n,flag=0,ans;
        scanf("%d",&n);
        if(n%11!=0) ans=0;
        else{
            for (int i = 0; i*N1 <= n; ++i) {
                for (int j =0; j*N2 <=n; ++j) {
                    for (int k = 0; k*N3 <=n; ++k) {
                        if(i*N1+j*N2+k*N3==n){
                            ans=i+j+k;
                            flag=1;
                            break;
                        }
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
        }//注意其中的break层层思想，及时退出


        printf("%d\n",ans);



    }
    return 0;
}