/*Given a string s without spaces, a character ch and an integer count. 
Your task is to return the substring that remains after the character ch has appeared count number of times.
Note:  Assume upper case and lower case alphabets are different. “”(Empty string) should be 
returned if it is not possible, or the remaining substring is empty.*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    char ch;
    cout<<"Enter a chracter for check: ";
    cin>>ch;
    int count;
    cout<<"Enter a count number of times: ";
    cin>>count;
    // string found;
    // int c = 0, a = 0;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i] == ch){
    //         c++;
    //     }
    //     if(c == count){
    //         a = 1;
    //         found = s.substr(i+1);
    //         break;
    //     }
    // }
    // if(a==1){
    //     cout<<found;
    // }
    // else{
    //     cout<<" '' ";
    // }


    string store;
    int p = 0, z=0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(s[i] == ch) {
            p++;
        }
        z++;
            if(p == count) {
                //z = i;
                for(int j = z; j<n; j++) {
                store += s[j];
            }
            cout<<store;
        }
    }
    cout<<"'' ''";

}
