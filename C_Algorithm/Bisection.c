//
// Created by colorcard on 2024/10/25.
//
//顺序从小到大
#include <stdio.h>

int binarySearch(int * nums, int target, int left, int right) {  //left代表左边界，right代表右边界
    if (left > right) return -1;
    int mid = (left + right)/2;
    if (nums[mid] == target) return mid;
    if (nums[mid] > target)
        return binarySearch(nums, target, left, mid-1);
    else
        return binarySearch(nums, target, mid+1, right);
}

//O(log2n)

int search(int* nums, int numsSize, int target){

    for (int i = 0; i < numsSize; ++i) {
        if(nums[i]==target) return i;
        if(nums[i]>target) break;
    }
    return -1;

}

//O(n)




int main() {
    int arr[] = {1, 3, 4, 6, 7,8, 10, 11, 13, 15}, target = 3;
    printf("%d", binarySearch(arr,4,0,9));
}