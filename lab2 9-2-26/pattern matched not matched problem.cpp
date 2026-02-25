#include<bits/stdc++.h>
using namespace std;

int main(){

    string T = "BAUSTIAN";
    string p = "STU";
    int n1 = T.length();
    int n2 = p.length();
    int c = 0;
    cout<<n1<<" "<<n2<<endl;
    for( int i = 0;i<n1-n2;i++){
        for(int j =0;j<n2;j++){
            if(p[j]==T[i+j]){
                c = c+1;
            }
        }
        if(c==n2){
            cout<<"Pattern Matched"<<endl;
            break;
        }
        else{
            cout<<"Patterm not matched"<<endl;
        }
    }

    


    return 0;
}