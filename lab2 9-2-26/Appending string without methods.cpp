#include<bits/stdc++.h>
using namespace std;

int main(){

    string p = "ABCD";
    string q = "XYZ";
    char k[100]; // Assuming a sufficiently large size for the combined string

    int i = 0;
    int j = 0;

    // Copy characters from string p to char array k
    while (i < p.length()) {
        k[j++] = p[i++];
    }

    // Copy characters from string q to char array k
    i = 0;
    while (i < q.length()) {
        k[j++] = q[i++];
    }

    k[j] = '\0'; // Null terminate the combined string
    cout<<"size of int j: "<<j<<endl;

    cout << "Combined string: " << k << endl;

    return 0;
}