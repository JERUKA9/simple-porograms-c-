#include<iostream>
#include<cstring>
struct student{

char name[25];
int age;
int rollno;
float percentage;


}record1;
using namespace std;

int main()
{

  struct student  record1 = {"williams",21,11,60.5};
  struct student  record2 ={"robert",23,01,78.5};

  std::cout<<"name = "<<record1.name<<std::endl<<"age:"<<record1.age<<std::endl<<"roll:" <<record1.rollno;
std::cout<<"name = "<<record2.name<<std::endl<<"age:"<<record2.age<<std::endl<<"roll:" <<record2.rollno;




 return 0;

}
