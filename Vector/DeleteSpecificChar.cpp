#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};

    ch.erase(find(ch.begin(), ch.end(), 'c'));

    cout<<"Now updated char Vector are: "<<endl;
    for(int i=0; i<ch.size(); i++){
        cout<<ch[i]<<endl;
    }
}