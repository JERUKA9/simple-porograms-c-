#include<iostream>

bool wynik;

int main()
{
	wynik= true||false&&false||false&&true||true;
	
	std::cout<<"wynik="<<wynik<<std::endl;
	
}
