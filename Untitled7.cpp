#include<iostream>
#include"Person.h"
using namespace std;

int main()
{

Person person;

person.setName("Georgina");
std::cout<<person.toString()<<std::endl;
std::cout<<"name of person with get method"<<person.getName()<<std::endl;

return 0;

}
