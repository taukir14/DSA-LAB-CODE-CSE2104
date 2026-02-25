#include<bits/stdc++.h>
using namespace std;

int main(){

    string p = "ABCD";
    char k[5];
    int i = 0;
    while(i<4){
        k[i] = p[i];
        if(i==3){
            k[i]='\0';
        }
        i++;
    }
    cout<<"Copied: "<<k<<endl;
    cout<<p.size()<<endl;
    cout<<p.capacity()<<endl;
    


    return 0;
}