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
    for(int i = 0; i<n;i++){
        int m = v[i];
        int k = i;
        for(int j = i;j<n;j++){
            if(v[j]<m){
                m = v[j];
                k = j;

            }
            //swap(v[i],v[k]);
        }
        swap(v[k],v[i]);

    }
    cout<<"The Sorted value: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

}