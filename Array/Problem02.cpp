#include<iostream>
using namespace std;

int LargeNumber(int arr[], int n){
    int larg = arr[0];
    for(int i= 1; i<n; i++){
        if(arr[i] > larg){
            larg = arr[i];
        }
    }

    return larg;
}
int main(){
    int array []= {1, 4, 5, 2, 9,-8, 7};
    int size = sizeof(array)/ sizeof(array[0]);

    cout<<"Largest number is: "<< LargeNumber(array, size);
    return 0;
}