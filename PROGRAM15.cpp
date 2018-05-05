#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int main()
{
 srand(time(NULL));
 std::cout<<((std::rand()%100)+1)<<std::endl;
 int liczba =(std::rand()%100)+1;
 std::cout<<"zgadnij liczbe";



 return 0;

}
