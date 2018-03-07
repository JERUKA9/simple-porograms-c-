#include<iostream>

int main()
{
	bool wynik =true;
	std::cout<<"wynik ="<<wynik<<std::endl;
	std::cout<<"wynik ="<<!wynik<<std::endl;
	std::cout<<"wynik ="<<!!wynik<<std::endl;
	wynik = !wynik;
	std::cout<<"wynik ="<<wynik<<std::endl;
	wynik = !(123>345);
	std::cout<<"wynik ="<<wynik<<std::endl;
	return 0;
	
}
