#include<iostream>

using namespace std;

int main()

{
    int liczba;
     std::cout<<"podaj liczbe";
     std::cin>>liczba;
     switch(liczba)
     {
     case 1:
        std::cout<<"mozenie";
        std::cout<<liczba*1;
        break;

     case 2:
        std::cout<<"dzielenie";
        std::cout<<liczba/1;
        break;
     case  3:
        std::cout<<"dodawanie";
        std::cout<<liczba+1;
        break;

     case 4:
        std::cout<<"odejmowanie";
        std::cout<<liczba-1;
        break;

     default:
        std::cout<<"zadne z tych obliczen";
        break;

     }

}
