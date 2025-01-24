#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v = {'a', 'b', 'c'};

    v.push_back('d');

    cout << "After Push Back Output vector IS: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.insert(v.begin() + 1, 'E');

    cout << "After Insert Output vector IS: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}