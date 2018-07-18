#include<iostream>
using namespace std;
class oper{
public:
    int a =2;
    void operator++(){a=a+5;}
    void display(){std::cout<<a;}

};
int main()
{

    oper app;
    ++app;
    app.display();

}
