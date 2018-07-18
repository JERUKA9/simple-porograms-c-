#include<iostream>
#include<cstring>

using namespace std;

int main()
{
int a =34;
int b;
int *p;
p=&a;
std::cout<<"the address of the a is :"<<p;
std::cout<<"value at the address is:"<<*p;



 return 0;

}
