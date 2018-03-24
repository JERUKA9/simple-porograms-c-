#include<iostream>
int main()
{
	int liczba;
	std::cin>>liczba;
	if(liczba >=10)
	{
		std::cout<<"liczba jest >=10"<<std::endl;
		if(liczba >=50)
		{
			std::cout<<"liczba jest >=50"<<std::endl;
			if(liczba<=100)
			std::cout<<"liczba jest <=100"<<std::endl;
		}
	}
	std::cout<<"koniec"<<std::endl;
	return 0;
	
}
