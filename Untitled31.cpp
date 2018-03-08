#include<iostream>

bool wynik;


int main()
{
	wynik = true||false&&!true &&false||!(!true&&false);
	std::cout<<"wynik="<<wynik<<std::endl;
	return 0;
	
}
