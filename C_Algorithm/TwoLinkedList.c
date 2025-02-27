//
// Created by colorcard on 25-2-26.
//
#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct ListNote{
    E element;
    struct ListNote * next;
    struct ListNote * prior;
};

typedef struct ListNote* Node;

void InitList(Node node){
    node->next=NULL;
    node->prior=NULL;
}


_Bool InsertList(Node head, E element,int index){
    if(index<1) return 0;
    while (--index){
        head=head->next;//理解形参
        if(head==NULL) return 0;
    }

    Node node= malloc(sizeof (struct ListNote));//创建一个新的节点

    if (node==NULL) return 0;//内存分配失败
    node->element=element;//保存元素
    node->next=head->next;//让新的接点指向原本位置节点
    head->next=node;//让前驱节点指向新的节点
    node->prior=head;//让新的节点的前驱节点指向前驱节点
    node->next->prior=node;//让原本位置节点的前驱节点指向新的节点

    return 1;
}

_Bool DeleteList(Node head,int index){
    if(index<1) return 0;
    while (--index){
        head=head->next;
        if(head==NULL) return 0;
    }//寻找前驱节点
    if(head->next==NULL) return 0;
    Node tmp=head->next;
    head->next=head->next->next;
    head->next->prior=head;//让删除节点的后继节点的前驱节点指向前驱节点
    free(tmp);//释放删除节点内存，防止内存泄漏

    return 1;
}

E * GetList(Node head,int index){
    if(index<1) return 0;
    do{
        head=head->next;
        if(head==NULL) return 0;
    }
    while (--index);
    return &head->element;
}

int FindList(Node head,E element){
    head=head->next;
    int i=1;
    while (head){
        if(head->element==element) return 0;
        head=head->next;
        i++;
    }

    return -1;
}

int SizeList(Node head){
    int i=0;
    while (head->next){
        head=head->next;
        i++;
    }
    return i;
}


void PrintList(Node head){
    while (head->next){
        head=head->next;
        printf("%d ",head->element);
    }
}


int main(){
    struct ListNote head;//头节点
    InitList(&head);

    for (int i = 0; i < 3; ++i) {
        InsertList(&head,i*100,i);
    }
    DeleteList(&head,0);

    PrintList(&head);



    return 0;
}