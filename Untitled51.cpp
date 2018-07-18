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
cin.getline(name2,30);
strcpy(name1,name2);

std::cout<<"name1 ="<<name1<<std::endl<<"name2 ="<<name2;




 return 0;

}
