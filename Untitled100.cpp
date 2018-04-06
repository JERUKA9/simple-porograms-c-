#include <iostream>


int main()
{
	int * tablica = nullptr, rozmiar =0;
	std::cout<<"podaj liczby, 0 konczy wczytywanie.\n";
	
	while(true)
	{
		int liczba;
		std::cin>>liczba;
		
		if(liczba ==0)
		 break;
		 
		 int 8 nowa = new int[rozmiar +1];
		 
		 for(ont i=0; i<rozmiar; ++i)
		 nowa[i]= tablica[i];
		 
		 nowa[rozmiar]=liczba;
		 
		 delete[] tablica;
		 
		 tablica = nowa;
		 rozmiar++;
		 
	}
	std::cout<<"te same liczby, ale odwrotnie!.\n";
	
	for(int i =rozmiar -1;i>=0; --i)
	std::cout<<tablica[i]<<'';
	
	delete[] tablica;
	
}
