#include<iostream>
using namespace std;
class myclass1{
    public: 
    void myfun1(){
        cout<<"1st base class";
    }
};
class myclass2{
    public:
    void myfun2(){
        cout<<endl<<"2nd base class";
    }
};
class child : public myclass1, public myclass2{
    
};
int main(){
    child obj;
    obj.myfun1();
    obj.myfun2();
}