#include<string>
#include<iostream>

void szukajWszystkichFraz(std::string & tekst, std::string szukanaFraza)
{
	size_t znalezionaPozycja=tekst.find(szukanaFraza);
	if(znalezionaPozycja===std::string::npos)
	{
		std::cout<<"nie znaleziono frazy w tekscie"<<std::endl;
		return;
		
	}
	
	do
	{
		std::cout<<"Fraza zostala odnaleziona na pozycji"<<znalezionaPozycja<<std::endl;
		znalezionaPozycja=tekst.find(szukanaFraza,znalezionaPozycja+szukanaFraza.size());
		
	}while(znalezionaPozycja != std::string::npos);
	
	
}
int main()
{
	std::strng naszTekst = "przyklad z kursu C++(http://cpp0x.pl)- najlepszy kurs w internecie";
	szukajWszystkichFraz(naszTekst,"C++")
	return 0;
	
}
