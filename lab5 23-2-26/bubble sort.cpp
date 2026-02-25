#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cout<<"input n:"<<endl;
    
    cin>>n;
    cout<<"input value: "<<endl;
    for(int i = 0 ;i<=n-1;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
          if(v[j]>v[j+1]){  
            int t = v[j];
            v[j]=v[j+1];
            v[j+1]=t;
        }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}