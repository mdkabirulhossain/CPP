#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x){
    while (low <= high)
    {
        int mid = low + (high - low) /2;

        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return -1;
    
}

int main(){
    int arr[] = {1, 2, 4, 6, 7, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Please enter the search value: ";
    cin>>x;
    int result = binarySearch(arr, 0, size, x);

    if(result == -1){
        cout<<"Element is not present in the array";
    }else{
        cout<<"Element is present at Index: "<<result <<" and Value is: "<<arr[result];
    }
}
