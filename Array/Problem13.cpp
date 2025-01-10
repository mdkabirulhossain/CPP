#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> LeftV(n1), RightV(n2);

    for (int i = 0; i < n1; i++)
    {
        LeftV[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        RightV[i] = arr[mid + 1 + i];
    }

    int i= 0 , j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (LeftV[i] <= RightV[j])
        {
            arr[k] = LeftV[i];
            i++;
        }
        else
        {
            arr[k] = RightV[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = LeftV[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        /* code */
        arr[k] = RightV[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 5};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}