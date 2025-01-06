//4, 5, 7, 9, 9, 12, 22, 45

//5 4 9 7 12 9 45 22

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void waveForm(int arr[], int n){
    sort(arr, arr+n);
}

int main(){
    int arr[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    waveForm(arr, size);

    for(int i=0; i<size; i++){
        if(i %2 != 0){
            cout<<arr[i]<<" " <<arr[i-1] <<" ";
        }
    }
    return 0;
}