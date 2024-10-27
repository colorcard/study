//
// Created by colorcard on 2024/10/25.
//

#include <stdlib.h>
#include "stdio.h"

typedef int E;//方便知道某个元素是结构体里的元素

struct List{
    E *array;
    int capacity;
    int size;
};

typedef struct List * ArrayList;

_Bool ListInit(ArrayList list){
    list->array = malloc(sizeof(E) * 10);
    if (list->array == NULL) return 0;
    list->capacity = 10;
    list->size=0;

    return 1;
}

_Bool InsertList(ArrayList list,E element,int index){
    if(index<1||index>list->size+1) return 0;
    if(list->size==list->capacity){
        int newCapacity = list->capacity+(list->capacity>>1);
        int *newArray = realloc(list->array,sizeof(E)*newCapacity);
        if(newArray==NULL) return 0;
        list->array=newArray;
        list->capacity=newCapacity;
    }

    for (int i = list->size; i > index-1; i--) {
        list->array[i]=list->array[i-1];//给插入index的后面元素全部往后面移动一位
    }
    list->array[index-1]=element;
    list->size++;//记得给元素值提升
    return 1;

}//list操作列表，element插入元素，index插入位置

_Bool DeleteList(ArrayList list,int index){
    if(index<1||index>list->size+1) return 0;

    for (int i = index-1; i < list->size-1; ++i) {
        list->array[i]=list->array[i+1];
    }
    list->size--;
    return 1;
}//O(n)

int SizeList(ArrayList list){
    return list->size;
}//O(1)

E * GetList(ArrayList list, int index){
    if(index < 1 || index > list->size) return NULL;   //如果超出范围就返回NULL
    return &list->array[index - 1];
}//O(1)

int FindList(ArrayList list, E element){
    for (int i = 0; i < list->size; ++i) {
        if(list->array[i] == element) return i + 1;
    }
    return -1;
}//O(n)


void PrintList(ArrayList list){
    for (int i = 0; i < list->size; ++i) {
        printf("%d ",list->array[i]);
    }
    printf("\n");
}//O(n)




int main(){
    struct List list;
    if(ListInit(&list)){
        for (int i = 0; i < 30; ++i) {
            InsertList(&list,i,i);
        }
        PrintList(&list);
    } else{
        printf("Error!");
    }


    return 0;
}

