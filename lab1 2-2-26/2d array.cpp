#include<iostream>
using namespace std;
//2d array input and output
int main(){
    int m;
    int n;
    
    cout<<"enter the size for 2d array[i][j]"<<endl;
    cin>>m;
    cin>>n;
    
     int arr2d[m][n];
//for input
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr2d[i][j];

        }
    }
    //for output
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<arr2d[i][j]<<" ";

        }
        cout<<endl;
    }


}