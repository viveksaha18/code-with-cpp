#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    // outer loop
    for(int i=0;i<n;i++){
        // print space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // print stars
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        // print space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}