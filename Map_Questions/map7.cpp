/*Given a string, say S, print it in reverse manner eliminating the repeated characters and spaces.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str;
    // cout<<"Enter the size of an array: ";
    // cin>>str;
    string str = "GEEKS FOR GEEKS";
    map<char,int> mp;
    string rev;
    for(int i=str.size()-1; i>=0; i--){
        if(str[i] != ' '){
            mp[str[i]]++;
            if(mp[str[i]] == 1){
                rev += str[i];
            }
        }         
    }
    cout<<rev;
}