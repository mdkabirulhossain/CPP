#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    cout<<"Please enter the array size: ";
    int n;
    int arr[n];
    for(int i=0; i<n; i++){
        
    }
}