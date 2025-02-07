#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int fact = 1;
    cout<<"Please eneter the number: "<<endl;
    cin>>n;

    if(n<0){
      cout<<"Negative number have no factorial value"<<endl;
    }
    else if(n == 0 || n == 1){
        cout<<"Factorial of" <<n << "is" << 1;
    }
    else{
        for(int i=2; i<=n; i++){
            fact *= i;
        }
        cout<<"Factorial of " <<n << " is " << fact;
    }
    

}