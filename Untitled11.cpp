#include<iostream>

float a;
float b;
float c;

int main()
{
	std::cin.sync();
	
	std::cout<<"wprowdaz liczbe a";
	std::cin>>a;
	std::cout<<"czy udalo sie wczytac ?"<<std::cin.good()<<std::endl;
	std::cout<<"czy cos nawalilo ?"<<std::cin.fail()<<std::endl;
    std::cout<<"liczba a ="<<a<<std::endl;
    
	std::cin.clear();
	
	std::cout<<"wprowdaz liczbe b";
	std::cin>>b;
	std::cout<<"czy udalo sie wczytac ?"<<std::cin.good()<<std::endl;
	std::cout<<"czy cos nawalilo ?"<<std::cin.fail()<<std::endl;
	std::cout<<"liczba b ="<<b<<std::endl;
	
	std::cin.clear();
	
	std::cout<<"wprowdaz liczbe c";
	std::cin>>c;
	std::cout<<"czy udalo sie wczytac ?"<<std::cin.good()<<std::endl;
	std::cout<<"czy cos nawalilo ?"<<std::cin.fail()<<std::endl;
	std::cout<<"liczba c ="<<c<<std::endl;
	
	std::cin.clear();
	
}
