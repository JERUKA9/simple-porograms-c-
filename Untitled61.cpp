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
  struct student *ptr;
  ptr =&record1;

  std::cout<<"name = "<<ptr->name<<std::endl<<"age:"<<ptr->age<<std::endl<<"roll:" <<ptr->rollno;





 return 0;

}
