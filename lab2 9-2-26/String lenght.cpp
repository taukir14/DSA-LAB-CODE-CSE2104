#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string s;
cout<<"Enter a string: "<<endl;
cin>>s;
cout<<"Your string: "<<s<<endl;

int i = 0; //to use in loop
int c = 0; // to count lenght

while(s[i] != '\0'){
    c++; //increment c
    i++;
}
cout<<"string lenght: "<<c<<endl;


return 0;
}