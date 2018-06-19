#include<iostream>
#include<sstream>

using namespace std;


int main()
{

string name ="bob";

int age =32;

stringstream ss;
ss<<"name is:";
ss<<name;

ss<<"Age is:";
ss<<age;

string info =ss.str();

std::cout<<ss.str()<<std::endl;






 return 0;

}
