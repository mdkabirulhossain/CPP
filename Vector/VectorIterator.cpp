#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num = {1, 2,3, 4, 5};

    //declear iterator
    vector<int>::iterator i;

    //initialize the iterator

    i = num.begin();

    //First Iterator value check
    cout<<"num[0] = "<< *i <<endl;

    return 0;
}