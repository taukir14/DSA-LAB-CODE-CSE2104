#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<" input size: ";
    cin>>n;
    
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end()); // Sorting the vector for binary search

    cout<<"input q:"<<endl;
    int q;
    cin >> q;

    int start = 0;
    int last = n - 1;

    while(start <= last){
        int mid = (start + last) / 2;

        if(v[mid] == q){
            cout<<"found"<<endl;
            return 0;
        }
        else if(q > v[mid]){
            start = mid + 1;
        }
        else{
            last = mid - 1;
        }
    }

    cout<<"not found"<<endl;
    return 0;
}