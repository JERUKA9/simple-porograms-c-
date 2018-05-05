#include<iostream>

using namespace std;



int main()
{

    int a = 4;
    do
    {
        std::cout<<"wpisz liczbe";
        std::cin>>a;
        if(a!=4)
            std::cout<<"wpisz ponownie",a;
    }while(a<=4);

     return 0;


}
