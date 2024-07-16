#include<iostream>
using namespace std;
class encapsulation{
    private:
    int salary;
    public:
    void set(int s){
        salary = s;
    }
    int get(){
        return salary;
    }
};
int main(){
    encapsulation obj;
    obj.set(5000);
    cout<<obj.get();
}