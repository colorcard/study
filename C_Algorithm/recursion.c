//
// Created by colorcard on 2024/10/30.
//

#include <stdio.h>

int recursion(int n);
int tailRecur(int n,int res);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n%d", recursion(n), tailRecur(n,0));
    return 0;
}

int recursion(int n){
    if(n==1) return 1;
    int res= recursion(n-1);
    return res+n;
}
//普通递归算法，先从上向下最终情况递减到最初情况，然后给结果一层层往上归（有过多占用内存的可能，比循环效果差）
//求和的时候在归的时候发生，意味着递和归双重消耗

int tailRecur(int n,int res){
    if(n==0) return res;//终止条件
    return tailRecur(n-1,res+n);
}
//尾递归法，其求和过程发生在递的过程，其可以被编译器优化成循环,效果更优