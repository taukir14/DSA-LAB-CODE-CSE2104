#include<iostream>
#include<vector>
using namespace std;
//vector insertion and deletion
//insertion at any position
//deletion at any position
// time complexity O(n)
//space complexity O(n)
//dynamic size
//C++ STL vector

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(15);
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
    //cout<<v.at(10);
    int position = 2; //3rd position
    int value = 100; //value to be inserted
    v.insert(v.begin()+position,value); //insertion
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" "; //output after insertion
    }
    cout<<endl;
    v.erase(v.begin()+2);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" "; //output after deletion
    }
     cout<<endl; //new line
    
}