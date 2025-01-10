#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void segregateEvenOdd(int nums[], int size){
    int left =0, right = size - 1;

    while (left < right)
    {
        /* code */
        while (nums[left] == 0 && left < right)
        {
           left ++;
        }
        while (nums[right]  == 1 && left < right)
        {
            right --;
        }

        if(left < right){
            Swap(&nums[left], &nums[right]);
            left++;
            right--;
        }
        
        
    }
    
}

int main(){
    int arr[] ={0, 1,1, 1, 1, 0, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    segregateEvenOdd(arr, size);

   
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
        
    }
    
}