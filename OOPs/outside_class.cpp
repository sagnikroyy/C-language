#include<iostream>
using namespace std;
class car{
    public:
    
    void printt();

};
void car :: printt(){       // :: ---> called this scope resolution. 
    cout<<"Outside the class";
}
int main(){
    car c;
    c.printt();
}