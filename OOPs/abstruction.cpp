#include<iostream>
using namespace std;
class abstruction{
    private: 
    int x,y;
    public: 
    void set(int a, int b){
        x = a;
        y = b;
    }
    void get(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y;
    }
};
int main(){
    abstruction obj;
    obj.set(5,4);
    obj.get();
    return 0;
}
