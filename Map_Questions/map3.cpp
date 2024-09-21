/*Given an array arr of N integers, the task is to check whether the frequency of the elements 
in the array is unique or not. Or in other words, there are no two distinct numbers in array 
with equal frequency. If all the frequency is unique then return true, else return false.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,3,2,4,5};
    map<int,int>mp;
    
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;

    }
    vector<int>v1;
    for(auto x:mp){
        v1.push_back(x.second);
        
    }
    sort(v1.begin(),v1.end());
    int flag=1;
    for(int i=0;i<v1.size()-1;i++){
        if(v1[i]==v1[i+1])
        {
            flag=0;
            // cout<<"false";
        }

    }
    if(flag=1){
        cout<<"True";
    }
    else{
        cout<<"False";
    } 
}