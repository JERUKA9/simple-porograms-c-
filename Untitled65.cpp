#include<iostream>

void wyswietl(int tablica[],int ile)
{
	if(ile<=0)
	{
		std::cout<<"tablica jest pusta"<<std::endl;
		return
	}
	
	int i=0;
	do
	{
		std::cout<<tablica[i]<<",";
		i++;
	}while(i<ile);
	
	std::cout<<std::endl
}
int dopisz(int nliczba,int tablica[],int ile)
{
	tablica[ile]=iliczba;
	ile++;
	return ile;
	
}

int main()
{
	int liczbaelementow=0;
	int  tablicaliczb[10];
	wyswietl(tablicaliczb,liczbaelementow);
	
	liczbaelementow=dopisz(123,tablicaliczb,liczbaelementow);
	wyswietl(tablicaliczb,liczbaelementow);
	
	liczbaelementow=dopisz(321,tablicaliczb,liczbaelementow);
	wyswietl(tablicaliczb,liczbaelementow);
	
	return 0;
	
}
