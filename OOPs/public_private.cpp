#include<iostream>
using namespace std;
class excess
{
public:
    int x;
    int y;
};
int main(){
    excess a1;
    excess a2;
    a1.x = 5;
    a2.y = 2;
    cout<<a1.x<<" "<<a2.y<<endl;
}
