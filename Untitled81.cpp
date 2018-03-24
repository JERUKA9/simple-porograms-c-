#include<string>
#include<iostream>
void szukajZnaku(std::string & tekst, char szukanyZnak)
{
	size_t znalezionaPozycja = tekst.find(szukanyZnak);
	if(znalezionaPozycja == std::string::npos)
	std::cout<<"nie znaleziono znaku w tekscie"<<std::endl;
	else
	std::cout<<"znak zostal odnaleziony na pozycji"<<znalezionaPozycja<<std::endl;
}
int main()
{
	std::string naszTekst= "Przyk³ad z kurscu C++ (http://cpp0x.pl)";
	szukajZnaku(naszTekst,'k');
	return 0;
	
}
