#include<iostream>
using namespace std;
class myclass{
    public:
    void myfun(){
        cout<<"Parent class";
    }
};
class mychild : public myclass{

};
class mygrandchild : public mychild{

};
int main(){
    mygrandchild obj;
    obj.myfun();
}