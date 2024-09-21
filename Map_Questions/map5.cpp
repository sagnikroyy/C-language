/*Bob is very fond of balloons. Once he visited an amusement park with his mother. The mother told Bob 
that she would buy him a balloon only if he answer her problem right. She gave Bob a string S 
[contains only lowercase characters] and asked him to use the characters of string to form as many 
instances of the word "balloon" as possible. Return the maximum number of instances that can be formed.
Help Bob to solve the problem.
Note: You can use each character in the string at most once. */


#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str;
    // cout<<"Enter a string: ";
    // cin>>str;
    // string str = "loonbalxballpoon";
    string str = "bnlbllanmbaamnmobbanablboolonlol";
    map<char,int> mp;
    vector<int>store;
    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;  
    }
    for(auto i : mp){
        if(i.first == 'b'){
            store.push_back(i.second);
        }
        if(i.first == 'a'){
            store.push_back(i.second);
        }
        if(i.first == 'l'){
            store.push_back(i.second);
        }
        if(i.first == 'o'){
            store.push_back(i.second);
        }
        if(i.first == 'n'){
            store.push_back(i.second);
        }
    }
    int num = 0;
    for(int i=0; i<store.size(); i++){
        num = num*10 + store[i];
    }
    // cout<<endl<<r<<endl;
    if(num%11212 == 0){
        cout<<num/11212;
    }
    else{
        cout<<"Not solved";
    }
}
