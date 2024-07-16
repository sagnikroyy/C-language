#include<iostream>
using namespace std;
class brand{
    public:
    int price;
    string model;
    string name;
    brand(int x, string y, string z){
        price = x;
        model = y;
        name = z;
    }
};
int main(){
    brand b1(500000,"X10","BMW");
    cout<<b1.price<<" "<<b1.model<<" "<<b1.name<<endl;
}