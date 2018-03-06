#include<iostream>
int main()
{
	std::cout<<"podaj liczbe";
	int zmienna;
	std::cin>>zmienna;
	int wynik1= 3+zmienna*4;
	int  wynik2=(3+zmienna)*4;
	std::cout<<"wynik pierwszy:"<<wynik1<<std::endl;
	std::cout<<"wynik drugi:"<<wynik2<<std::endl;
	return 0;
	
}
