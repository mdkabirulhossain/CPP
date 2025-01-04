#include<iostream>
using namespace std;

void ArraySort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Please enter the array size: ";
    cin >> n;

    int arr [n];

    for(int i=0; i<n; i++){
        cout<<"arr[ "<<i << " ] :";
        cin>>arr[i];
    }
    ArraySort(arr, n);

    cout<<"Enter which position value do you want: ";
    int position;
    cin>> position;
    cout<< position <<" Value is: "<<arr[position - 1];

    return 0;

}