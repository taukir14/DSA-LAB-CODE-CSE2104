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
    
    for(int i = 1;i<n;i++){
        int t = v[i];
        int j = i-1;
        while(j>=0 && t<v[j]){
            v[j+1]=v[j];
            j--;

        
        }
        v[j+1] = t;

    }
    cout<<"The Sorted value: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

}