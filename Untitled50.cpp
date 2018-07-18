#include<iostream>
#include<cstring>

using namespace std;

int main()
{
char name1[30];
char name2[30];
int len;
std::cout<<"enter the name1 and name 2:"<<std::endl;
cin.getline(name1,30);
len =strlen(name1);
std::cout<<"length = " <<len;



 return 0;

}
