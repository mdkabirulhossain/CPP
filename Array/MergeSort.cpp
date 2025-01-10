#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> LeftVector(n1), RightVector(n2);
    for (int i = 0; i < n1; i++)
    {
        LeftVector[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        RightVector[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        /* code */
        if (LeftVector[i] <= RightVector[j])
        {
            arr[k] = LeftVector[i];
            i++;
        }
        else
        {
            arr[k] = RightVector[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftVector[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = RightVector[j];
        j++;
        k++;
    }
   
}
 void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
    void printVector(vector<int> & arr)
    {
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }

int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    int n = arr.size();

    cout << "Given vector is \n";
    printVector(arr);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}