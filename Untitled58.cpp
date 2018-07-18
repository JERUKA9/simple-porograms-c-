#include<iostream>
using namespace std;
void swap(int& num1,int& num2){

int num3;
num3 = num1;
num1 = num2;
num2 = num3 ;


}

int main()
{
 int a = 22 , b =33;
 std::cout<<a<<"\t"<<b<<std::endl;
 swap(a,b);
 std::cout<<a<<"\t"<<b<<std::endl;

return 0;
}

