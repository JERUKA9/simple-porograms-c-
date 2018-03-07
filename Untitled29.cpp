#include<iostream>
int main()
{
	bool wynik;
	wynik=true&&false|| !true&&false|| !(!true&&false);
	std::cout<<"wynik="<<wynik<<std::endl;
	return 0;
	
}
