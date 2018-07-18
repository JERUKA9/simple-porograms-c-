#include<iostream>
#include<cstring>
struct student{

char name[25];
int age;
int rollno;
float percentage;


};
using namespace std;

int main()
{

  struct student  record1;
  strcpy(record1.name,"williams");
  record1.age = 18;
  record1.rollno = 2;
  record1.percentage = 75.5;
  std::cout<<"name = "<<record1.name<<std::endl<<"age:"<<record1.age<<std::endl<<"roll:" <<record1.rollno;




 return 0;

}
