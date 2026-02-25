#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<" input size: "<<endl;
    cin>>n;
    vector<int>v;

    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        v.push_back(k); //to take input into vector
    }

    // Sorting helps to detect duplicates consecutively
    sort(v.begin(), v.end());

    int h = 0;
    for(int i = 0; i < n-1; i++){  // loop till n-1 to avoid out-of-bounds
        if(v[i] == v[i+1]){
            h++;
            cout<<"duplicate value: "<<v[i]<<endl;
        }
    }

    cout<<"duplicated values size: "<<h<<endl;
}