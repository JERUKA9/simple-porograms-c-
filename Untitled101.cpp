#include<iostream>


struct Lista
{
	Lista * ogon;
	int liczba;
};


void wypisz(Lista * lista)
{
	if(lista)
	{
		std::cout<<lista->liczba<<",";
		wypisz(lista->ogon)
	}
}

Lista * ostatni(Lista * lista)
{
	if(lista)
	while(lista->ogon)
	lista=lista->ogon;
	
	return lista;
}
 
 void dodajKoniec(Lista *& lista,int liczba)
 {
 	Lista * nowy = new Lista;
 	nowy->liczba=liczba;
 	nowy->ogon=nullptr;
 	
 	
 	if(lista)
 	ostatni(lista)->ogon=nowy;
 	else
 	lista=nowy;
 }
 
 void zniszcz(Lista *& lista)
 {
 	while(lista)
 	{
 		Lista * tmp =lista;
 		lista=lista->ogon;
 		delete tmp;
 		
	 }
	 lista=nullptr;
 }
int main()
{
	int liczba;
	Lista * lista =nullptr;
	std::cout<<"podaj liczby ,0 lub blad konczy:\n";
	
	while(std::cin>>liczba&&liczba)
	dodajKoniec(lista,liczba);
	
	std::cout<<"koniec oto liczby:\n";
	wypisz(lista);
	znisz(lista);
	
	
}
