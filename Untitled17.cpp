#include<iostream>


using namespace::std;


int main()
{
int a,b;
a=32;
b=10;
std::cout<<"values before swapping"<<a<<b<<std::endl;
a = a+b;
b= a-b;
a=a-b;
std::cout<<"values after swapping:"<<a<<b<<std::endl;



return 0;

}
