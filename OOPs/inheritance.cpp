#include<iostream>
using namespace std;
class vechial{
    public:
    string brand = "BMW";
    void horn(){
        cout<<"Tu_Tu"<<endl;
    }
};
class car: public vechial{
    public:
    string model = "X25";
};
int main(){
    car c1;
    c1.horn();
    cout<<c1.brand<<" "<<c1.model;
    return 0;
}