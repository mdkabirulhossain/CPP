#include<bits/stdc++.h>
using namespace std;

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ZeroOne(int arr[], int size){
    int left =0, right = size -1;

    while (left < right)
    {
        /* code */
        while (arr[left] == 0 && left < right)
        {
            /* code */
            left++;
        }
        while (arr[right] == 1 && left<right)
        {
            /* code */
            right --;
        }
        
        if(left < right){
            Swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
    
}

int main(){
    int arr[]= {1, 0, 0, 1, 0};
    int size = sizeof(arr)/sizeof(arr[0]);

    ZeroOne(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}