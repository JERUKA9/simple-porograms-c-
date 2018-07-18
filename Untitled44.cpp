#include<iostream>

using namespace std ;

int main()
{
int i, n,total,marks[100];
total = 0;
std::cout<<"enter the number of subjects:";
std::cin>>n;
for(i=0;i<=n-1;i++){

    std::cout<<"subject"<<i+1<<"=";
    std::cin>>marks[i];
    total = total + marks[i];
}
std::cout<<"total marks ="<<total<<std::endl;
std::cout<<"average = "<<total/n;

 return 0;

}
