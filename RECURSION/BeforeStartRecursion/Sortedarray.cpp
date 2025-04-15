#include<bits/stdc++.h>
using namespace std;

// Check whether the array is sorted or not using recursion 

bool isSorted(vector<int> arr , int n){
    if(n == 0 || n == 1) return true;

    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout << isSorted(arr,arr.size());
    return 0;
}