#include<iostream>
#include<vector>
//2d vector maximum element
#include<climits>
//C++ STL vector
//dynamic size
//  time complexity O(n*m)
// space complexity O(n*m)
//n is number of rows
//m is number of columns
//2d vector input and output
//finding maximum element in 2d vector
//using nested loops
//using vector of vectors
//example of 3x3 matrix

using namespace std;
int main(){
    vector<vector<int>>v;
    int k;
    cout<<"Enter elements for 3x3 matrix:"<<endl;
    for(int r=0;r<3;r++){ //3 rows

        vector<int>v1; //temporary vector for each row

        for(int c = 0;c<3;c++){ //3 columns

            cin>>k; //input element
            v1.push_back(k); //add element to the temporary row vector

        }
        v.push_back(v1); //add the row vector to the 2d vector
    }
    for(int r = 0;r<3;r++){
        for(int c = 0;c<3;c++){
            cout<<v[r][c]<<" "; //output element
        }
        cout<<endl; //new line after each row
    }
    int max = INT_MIN;
    for(int r = 0;r<3;r++){
        for(int c = 0;c<3;c++){
            if(v[r][c]>max){
                max=v[r][c]; //update maximum
            }
        }

    }
    cout<<"Maximum element in the 2D vector is : "<<endl;
    cout<<max<<endl; //output maximum element
}