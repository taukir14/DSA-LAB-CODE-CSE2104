#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    int k;
    for(int r=0;r<3;r++){
        vector<int>v1;
        for(int c = 0;c<3;c++){
            cin>>k;
            v1.push_back(k);

        }
        v.push_back(v1);
    }
    int max = INT_MIN;
    for(int r = 0;r<3;r++){
        for(int c = 0;r<c;r++){
            if(v[r][c]>max){
                max=v[r][c];
            }
        }

    }
    cout<<max<<endl;
}