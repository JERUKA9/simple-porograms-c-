#include<iostream>

using namespace std;

class stud{
public:
 char name[20];
 int age;
 float per;
};
 void enter(){

  std::cout<<"enter the name age  and percentage:\n";
  std::cin>>name>>age>>per;

 }
 void display(){

 std::cout<<"\nname\tage\tpercentage";
 std::cout<<"\n"<<name<<"\t"<<age<<"\t"<<per;
 }


 int main(){
 class stud s;
 s.enter();
 s.display();



}

