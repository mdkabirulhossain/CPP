#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> &v)
{ // Pass vector as a Refference
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> vec = {1, 3, 5, 6, 7};
    printV(vec);
    return 0;
}