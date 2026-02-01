#include<iostream>
using namespace std;
//single dimension array insertion
//insertion at any position
//shifting the elements to right side
//time complexity O(n)
//space complexity O(1)
//array size is fixed

int main(){
   
   /*
    int arr2[5] ;
    for(int i = 0;i<5;i++){
        cin>>arr2[i];
    }
    for(int i = 0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    */


    int age[100];
    int n,position,value;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"Enter the element:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>age[i];
    }
    for(int i = 0;i<n;i++){
        cout<<age[i]<<" ";
    }
    cout<<"Enter the position and the value:"<<endl;
    cin>>position>>value;
    for(int i =n;i>=position;i--){
        age[i+1]=age[i];
        

    }
    age[position]=value;
    for(int i = 0;i<n+1;i++){
        cout<<age[i]<<" ";
    }
    
}