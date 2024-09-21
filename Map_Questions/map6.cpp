/*You are given a string str that is made up of words separated by spaces. Your task is to find 
the word with the highest frequency, i.e. it appears the most times in the sentence. If multiple words 
have maximum frequency, then print the word that occurs first in the sentence. 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str;
    // cout<<"Enter a string: ";
    // cin>>str;
    string str = "the devil in the sky";
    map<string,int> mp;
    string ans;
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' '){
            ans += str[i];
        }
        else{
            mp[ans]++;
            ans = "";
        }
    }
    mp[ans]++;
    string word;
    int frq = 0;
    for(auto i: mp){
        if(i.second>frq){
            frq = i.second;
            word = i.first;
        }
    }
    cout<<"Word is "<<word<<" and frequency is "<<frq;
}