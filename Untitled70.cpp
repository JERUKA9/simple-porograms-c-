#include<iostream>

void wypisztablice(int tablica[],int ile)
{
	for(int indeks=0; indeks<ile;indeks++)
	std::cout<<tablica[indeks]<<std::endl;
}

int sumujliczby(int tablica[], int ile)
{
	int oblicz=0;
	for(int indeks=0;indeks<ile;indeks++)
	oblicz+=tablica[indeks];
	
	return oblicz;
}

int main()
{
	int dane[5];
	dane[0]=11;
	dane[1]=5;
	dane[2]=7;
	dane[3]=8;
	dane[4]=2;
	wypisztablice(dane,5);
	int wynik=sumujliczby(dane,5);
	std::cout<<"suma liczb wynosi ="<<wynik<<std::endl;
	return 0;
	
}
