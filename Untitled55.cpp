#include<iostream>
using namespace std;
void swap( int a , int b);
int main()
{
int a =3,b=33,c;

std::cout<<a<<"\t"<<b;
swap(a,b);

return 0;
}
void swap(int a , int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    std::cout<<a<<"\t"<<b;
}
