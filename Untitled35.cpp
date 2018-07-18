#include<iostream>


using namespace::std;

int main()
{
int number,factorial=1;
std::cout<<"enter any number:";
std::cin>>number;
while(number>0){
    factorial = factorial *  number;
    --number;
}
std::cout<<"the factorial is"<<factorial;

 return 0;
}
