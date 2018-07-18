#include<iostream>
using namespace std;
class base1{

protected:
    int x;
public:
    void showx(){std::cout<<x<<std::endl;}
};
class base2{
protected:
    int y;
public:
    void showy(){std::cout<<y<<std::endl;}
};
class derived: public base1, public base2{

public:
    void set(int i, int j){x=a; y=j;}
};
int main()
{

    derived obj;
    obj.set(10,20);
    obj.showx();
    obj.showy();
    return 0;
}
