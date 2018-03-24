#include<iostream>

void wypisztablice(int tablica[],int ile)
{
	int indeks=0;
	if(indeks<ile)
	do
	{
		std::cout<<tablica[indeks]<<std::endl;
		indeks++;
	}while(indeks<ile);
	
}
int main()
{
	int dane[5];
	dane[0]=123;
	dane[1]=321;
	dane[2]=333;
	dane[3]=222;
	dane[4]=111;
	wypisztablice(dane,5);
	
	return 0;
	
}
