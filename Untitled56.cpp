#include<iostream>
using namespace std;
void swap( int *num1, int *num2);
int main()
{
int a =3,b=33,c;


swap(&a,&b);

std::cout<<a<<"\t"<<b;

return 0;
}
void swap(int *num1 , int *num2)
{
    int num3;
    num3 = *num1;
    *num1 = *num2;
    *num2  =  num3;


}
