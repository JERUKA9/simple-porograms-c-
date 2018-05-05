#include<iostream>

using namespace std;

int main()
{
    bool wynik;

    std::cout<<(!true||false)&&(!false||true)&&(true&&!false)||(false&&true);


    std::cout<<wynik;

    return 0;

}
