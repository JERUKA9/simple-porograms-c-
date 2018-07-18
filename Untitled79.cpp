#include<iostream>
using namespace  std;
class base {
public:
    void display(){std::cout<<"you are in base class "<<std::endl;}

};
class derived: public base{
public:

       void display(){std::cout<<"you are in the derived class";}

};
int main()
{
base *b;
derived *d;
b->display();
d->display();



 return 0;

}
