#include<iostream>
#include<vector>
using namespace std;
//window maximum sum of size k
//sliding window maximum sum
#include<climits>

int main(){
    int max = INT_MIN;
    int a[6] ={2,6,-12,76,9};
    //int a[6] ={2,5,7,-3,4,10};
    for(int i =0;i<4;i++){ //6-3+1=4 windows of size 3
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum+=a[j+i]; //sliding window
            //i is the starting index of the window
            //j is the index inside the window
            //a[j+i] gives the correct index in the original array
            // for window starting at i, we take elements a[i],a[i+1],a[i+2]
            // which is achieved by a[j+i] where j goes from 0 to 2
            // sum of current window
            // cout<<a[j+i]<<" ";
            //cout<<sum<<endl;
        }
        if(sum>max){
            max=sum; //update maximum sum
        }
    }
    cout<<"maximum sum of the window is : "<<endl;
    cout<<max; //output the maximum sum among all windows

}