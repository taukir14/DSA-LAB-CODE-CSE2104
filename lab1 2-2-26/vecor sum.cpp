#include<iostream>
#include<vector>
using namespace std;

//vector sum from index start to end
//subarray sum using vector
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(15);
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    v.push_back(43);
    v.push_back(48);

int start = 2;
int end=5;
int sum = 0;

for(int i = start;i<=end;i++){
    sum=sum+v[start];
}
cout<<sum<<endl;
}