#include<iostream>

using namespace std;
class xyz
{
public:

int a;
xyz(int x){
a=x;
}
};
int main()
{
 xyz obj1(10);
 xyz obj2(20);
 xyz obj3(30);
std::cout<<obj1.a<<std::endl<<obj2.a<<std::endl<<obj3.a;



return 0;

}
