#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    int n, temp, max_count = 0;
    cout<<"Please enter the vector size: ";
    cin>>n;

    cout<<"Enter the Vector value: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Vector [ "<< i << " ]: ";
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int count =0;
        for(int j= i+1; j<n; j++){
            if(vec[i] == vec[j]){
                count ++;
                if(max_count < count){
                    max_count = count;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        int count =0;
        for(int j= i+1; j<n; j++){
            if(vec[i] == vec[j]){
                count ++;
                if(max_count = count){
                    cout<<"Most Occurred Number is: "<<vec[i];
                }
            }
        }
    }
    
return 0;
}