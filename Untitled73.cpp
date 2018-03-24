#include<iostream>

void wypisz(int iliczba)

{
	std::cout<<"wartosc liczby wynosi:"<<iliczba<<std::endl;
	iliczba+=10;
	std::cout<<"wartosc liczby wynosi:"<<iliczba<<std::endl;
	
}

int main()
{
	int inaszaliczba=7;
	std::cout<<"nasza liczba ="<<inaszaliczba<<std::endl;
	wypisz(inaszaliczba);
	std::cout<<"nasza liczba ="<<inaszaliczba<<std::endl;
	return 0;
	
}
