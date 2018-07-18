#include<iostream>
using namespace std;

class base {
int i,j;
public:
    void set(int a ,int b){i =a, j=b;}
    void show(){std::cout<<i<<""<<j<<std::endl;}
};
class derived : public base{
int k;
public:
    derived(int x){k=x;}
    void showk(){std::cout<<k<<std::endl;}



};

int main()
{
derived ob(4);
ob.set(1,2);
ob.show();
ob.showk();

return 0;

}
