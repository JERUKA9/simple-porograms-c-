#include<iostream>

bool wynik;

int main()
{
	wynik= (!true || ! false)&&(true||true)||(!false&&true);
	
	std::cout<<"wynik="<<wynik<<std::endl;
	
}
