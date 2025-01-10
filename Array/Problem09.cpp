#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr [] = {4, 1, 0, 2, 5, 6};
    int size = sizeof(arr)/ sizeof(arr[0]);
    sortArray(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<size; i++){
        if(arr[i] != i){
            cout<<endl<<"Smallest Missing Number: "<< i <<endl;
            break;
        }
    }
    return 0;
}