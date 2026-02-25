#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cout<<" input size: ";
    cin>>n;
    vector<int>v;

    for(int i = 0;i<n;i++)
    {int k;
    cin>>k;
    v.push_back(k); //to take input into vector

    }
    int q;
    cout<<"Input Targeted value for Linear Search : ";
    cin>>q;
    for(int i = 0;i<n;i++){
        if(v[i] == q){
            cout<<"Found"<<endl;
            return 0;
        }
        
    }

    cout<<"not found"<<endl;
    return 0;


}