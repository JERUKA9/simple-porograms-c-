#include<iostream>
using namespace std;
struct student {
int age;
char name[20];
}str;
union student1{
int age;
char name[20];
}uni;
int main(){
std::cout<<"memory of struct = "<<sizeof(str)<<std::endl<<"memory of union ="<<sizeof(uni);


}
