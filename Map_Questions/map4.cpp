/*You are given a 2D integer array of intervals whose length is n where intervals[i]=[start, end] 
I.e. all integers from start to end inclusive of start and end are also present and also 
we are given an integer k. We have to return the Powerful Integer. A powerful Integer is an integer 
that occurs at least k times. If multiple integers have at least k occurrences, we have to return 
the maximum integer out of all those elements.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<vector<int>> arr = {{1,4},{12,45},{3,8},{10,12}};
    vector<vector<int>> arr = {{1,3},{4,6},{3,4}};
    map<int,int> mp;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            mp[arr[i][j]]++;
        }
    }
    int num,a=0;
    int k;
    cout<<"Enter value of K: ";
    cin>>k;
    for(auto i : mp){
        if(i.second >= k){
            a = 1;
            k = i.second;
            num = i.first;
        }
    }
    if(a==1){
        cout<<num;
    }
    else{
        cout<<"-1";
    }
}