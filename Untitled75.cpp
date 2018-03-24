#include<iostream>

bool wczytaj_liczba(int & liczba)
{
	std::cin.clear();
	std::cin.sync();
	std::cin>>liczba;
	return std::cin.good();
	
}

int main()
{
	int x;
	do
	{
		std::cout<<"podaj liczbe:";
		
	}while(wczytaj_liczbe(x)==false);
	std::cout<<"liczba podana to :"<<x<<std::endl;
	
	return 0;
	
}
