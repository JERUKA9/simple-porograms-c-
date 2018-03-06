#include<iostream>

int main()
{
	int a;
	
	float b;
	
	std::cout<<"podaj liczbe calkowita";
	std::cin>>a;
	std::cout<<"czy udalo sie wczytac ?"<<std::cin.good()<<std::endl;
	std::cout<<"czy cos nawlilo ?"<<std::cin.fail()<<std::endl;
	
	std::cout<<"podaj liczbe rzeczywista";
	std::cin>>b;
	std::cout<<"czy udalo sie wczytac ?"<<std::cin.good()<<std::endl;
	std::cout<<"czy cos nawalilo?"<<std::cin.fail()<<std::endl;
	
	std::cout<<"liczba a ="<<a<<std::endl;
	std::cout<<"liczba b="<<b<<std::endl;
	return 0;
	
}
