#include<iostream>
using namespace std;
class car{
    public:
    
    int speed(int s);

};
int car :: speed(int k){
    return k;
}
int main(){
    car c;
    cout<<c.speed(200);
}