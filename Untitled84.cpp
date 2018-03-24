#include<string>
#include<iostream>

void szukajWszystkichFrazOdKonca(std::string & tekst,std::string szukanaFraza)
{
	size_t znalezionaPozycja=tekst.rfind(szukanaFraza);
	if(znalezionaPozycja==std::string::npos)
	{
		std::cout<<"nie znaleziono frazy w tekscie"<<std::endl;
		return;
		
	}
	
	do
	{
		std::cout<<"fraza zostala odnaleziona na pozycji"<<znalezionaPozycja<<std::endl
		if(znalezionaPozycja >=szukanaFraza.size())
		znalezionaPozycja=tekst.rfind(szukanaFraza,znalezionaPozycja - szukanaFraza.size());
		else
		znalezionaPozycja=std::string::npos;
		
	}while(znalezionaPozycja !=std::string::npos);
	
}
int main()
{
	std::string naszTekst="przyklad z kursu C++(http://cpp0x.pl)- najlepszy kurs C++ w internecie !";
	
	szukajWszystkichFrazOdKonca(naszTekst,"C++");
	return 0;
	
}
