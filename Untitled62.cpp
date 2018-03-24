#include<iostream>
int main()
{
	int liczba[10];
	int licznik=0;
	do
	{
		std::cin>>liczba[licznik];
		licznik++;
		
	}while(licznik<10);
	
	std::cout<<"podales nastepujace liczby:";
	licznik=0;
	do
	{
		std::cout<<liczba[licznik]<<",";
		licznik++;
		
	}while(licznik<10);
	
	return 0;
	
}
