#include<iostream>
using namespace std;

void Arrsort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]< arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1, 3, 2 ,5, 4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    Arrsort(arr, size);
    //Print largest 3 number
    for(int i=0; i<3; i++){
        cout<<arr[i] <<" ";
    }

}