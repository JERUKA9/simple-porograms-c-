#include<iostream>
using namespace std;
struct student {
int age;
char name[20];
};
void display( struct student rec){


std::cout<<"age ="<<rec.age<<std::endl<<"name = "<<rec.name<<std::endl;



}
int main(){

struct student record1={23,"wiliams"};
struct student record2 ={17,"robert"};
display(record1);
display(record2);



}
