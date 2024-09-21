/*Given a list of N words. Count the number of words that appear exactly twice in the list.*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string>v1={"Aru","Ish","sag","Say","Say","Nil","Ish","Aru"};
    map<string,int> mp;
    for(int i=0; i<v1.size(); i++){
        mp[v1[i]]++;  
    }
    int count = 0;
    for(auto i : mp){
        if(i.second==2){
            cout<<i.first<<endl;
            count++;
        }
    }
    cout<<count;
    return 0;
}