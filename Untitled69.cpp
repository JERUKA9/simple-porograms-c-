#include<iostream>

void wypisztablice(int tablica[],int ile)
{
	for(int indeks=0;indeks<ile;indeks++)
	std::cout<<tablica[indeks]<<std::endl;
}
void wczytajliczby(int tablica[],int ile)
{
	for(int indeks=0;indeks<ile;indeks++)
	{
		std::cout<<"podaj liczbe"<<(indeks+1)<<":";
		std::cin>>tablica[indeks];
	}
}
int main()
{
	int dane[5];
	wczytajliczby(dane,5);
	wypisztablice(dane,5);
	return 0;
	
}
