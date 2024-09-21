/*You are given an array A of size N. The array contains almost distinct elements with some duplicates. 
You have to print the elements in sorted order which appears more than once.
*/

/*You are given an array A of size N. the array contains almost distinct element with some duplicates you have to 
print the elements to print the lemenrts in sorted order which apperars more than once 
yu are given an array A of size N.
your  */

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
    for(auto i: mp){
        if(i.second>=2){
            cout<<i.first<<" ";
            
        }
    }
}