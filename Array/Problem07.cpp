#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int arrNextValu[size];
    for(int i=0; i<size; i++){
        for(int j=0+i; j<size; j++)
        if(arr[i] <arr[j]){
            arrNextValu[i] = arr[j];
            break;
        }
    }
    sort(arr, arr+size-2);
    for(int i=0; i<size-2; i++){
        cout<<arr[i]<<" : "<<arrNextValu[i]<<endl;
    }
    return 0;
}