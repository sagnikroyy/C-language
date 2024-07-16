/*Given two integers s and d. The task is to find the smallest number such that the sum of its digits is 
s and the number of digits in the number are d. Return a string that is the smallest possible number. 
If it is not possible then return -1.

Examples:
Input: s = 9, d = 2
Output: 18 
Explanation: 18 is the smallest number possible with the sum of digits = 9 and total digits = 2.*/

#include<iostream>
using namespace std;
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
    string p;
    if(d==1 && s<=9){
        p = to_string(s);
        return p;
    }
    else if(d==1 && s>9){
         p = to_string(-1);
        return p;
    }
    int small = 1, large = 9;
    int z = d;
    while(z>1){
        small = small * 10;
        large = large*10 + 9;
        z--;
    }
    int flag = 0;
    for(int i=small; i<=large; i++){
        int sum = 0;
        int f = i;
        for(int j=1;j<=d;j++){
            sum = sum + (f%10);
            f = f/10;
        }
        if(sum==s){
            flag = 1;
            p = to_string(i);
            return p;
        }
    }
    if(flag==0){
        p = to_string(-1);
        return p;
    }
    
    }
};

int main(){
    int s,d;
    cout<<"Enter value of 's': ";
    cin>>s;
    cout<<"Enter value of 'd': ";
    cin>>d;
    Solution ob;
    cout<<"Smallest possible number is: ";
    cout<<ob.smallestNumber(s,d);
}
