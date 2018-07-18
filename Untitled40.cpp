#include<iostream>

using namespace std;
int add(int num1,int num2);
int sub(int num1, int num2);
int main()
{
 int a,b,c,d ,m,s;

 a=10;
 b=20;
 c=1000;
 d=3500;
 s=add(d,a);
 m=sub(d,c);
 std::cout<<s<<std::endl;
 std::cout<<m;

 return 0;

}
int add(int num1, int num2)
{
    int num3;
    num3=num1+num2;
    return num3;

}
int sub(int num1 , int num2)
{
    int num3;
    num3 = num1-num2;
    return num3;

}
