/*Given an array A of size N. The elements of the array consist of positive integers. 
You have to find the largest element with minimum frequency.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the size of an array: ";
    // cin>>n;
    // vector<int>arr;
    // cout<<"Enter array elements: "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    vector<int>arr={1,1,2,2,4,5,9,6,7,7};
    map<int,int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;  
    }
    int num;
    int frq = 10000;
    for(auto i : mp){
        if(i.second <= frq) {
            frq = i.second;
            num = i.first;
            // cout<<num<<" ";
        }
    }   
    cout<<"Frequency is "<<frq<<" of element is "<<num;
}