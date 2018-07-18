#include<iostream>
using namespace  std;
class base {
public:
    virtual void display(){std::cout<<"you are in base class "<<std::endl;}

};
class derived: public base{
public:

       void display(){std::cout<<"you are in the derived class";}

};
int main()
{
derived d;
base *b = &d;
b->display();




 return 0;

}
