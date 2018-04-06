#include<iostream>
#include<fstream>

int main()
{
	std::ifstream plik("dane.txt");
	if(!plik.good())
	
	return 0;
	
	int iPozycjaStartowa =4;
	
	plik.seekg(iPozycjaStartowa);
	
	int iLiczba;
	
	plik>>iLiczba;
	
	int iWyczytanychZnakow =plik.tellg()-iPozycjaStartowa;
	std::cout<<"liczba:"<<iLiczba<<std::endl;
	std::cout<<"wczytano"<<iWczytanychZnakow<<"znakow"<<std::endl;
	return 0;
	
}
