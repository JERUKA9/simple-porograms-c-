#include<iostream>
using namespace std;

class base {

int i;
protected:
    int j;
public:
    int k;
    void seti(int a){i = a;}
    int geti(){return i;}
};
class derived : protected base{

public:
    void setj(int a){j = a;}
    void setk(int a ){k = a;}
    int getj(){return j;}
    int getk(){return k;}

};
int main()
{
    derived ob;
    ob.setk(10);
    std::cout<<ob.getk()<<std::endl;
    ob.setj(12);
    std::cout<<ob.getj()<<std::endl;
    return 0;

}
