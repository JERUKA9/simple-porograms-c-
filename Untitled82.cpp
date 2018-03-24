#include<string>
#include<iostream>

void szukajWszystkichZnakow(std::string & tekst,char szukanyZnak)
{
	size_t znalezionaPozycja= tekst.find(szukanyZnak);
	if(znalezionaPozycja==std::string::npos)
	{
		std::cout<<"nie znaleziono znaku w tekscie"<<std::endl;
		return;
		
	}
	do
	{
		std::cout<<"znak zostal odnaleziony na pozycji"<<znalezionaPozycja<<std::endl;
		znalezionaPozycja=tekst.find(szukanyZnak,znalezionaPozycja+1);
		
	}while(znalezionaPozycja !=std::string::npos);
	
}
int main()
{
	std::string naszTekst="przyklad z kurscu C++ (http://cpp0x.pl)";
	szukajWszystkichZnakow(naszTekst,'z');
	return 0;
	
}
