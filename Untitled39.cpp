#include<iostream>

using namespace std;

int add (int num1 , int num2);


int main()
{
int a,b,s;
a=10;
b=20;
s= add(a,b);
std::cout<<s;
 return 0;
}
int add(int num1, int num2)
{
    int num3;
    num3 = num1+num2;
    return num3;

}
