 #include<iostream>
 using namespace std;

 void sortArray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
 };

 int main(){
    int arr[]= {5, 3, 1, 4, 2};
    int size = sizeof(arr)/ sizeof(arr[0]);
    sortArray(arr, size);
    for (int i = 0; i < size; i++) // Use a traditional for loop
    {
        cout << arr[i] << ", ";
    }
    cout << endl; // For better formatting
    return 0;
 }