#include<string>
#include<fstream>
#include<iostream>

bool wczytajLiczbe(std::ifstream&plik,int & liczba)
{
	plik.clear();
	plik>>iLiczba;
	if(plik.bad)
	{
		std::cout<<"wystapil blad sprzetowy!"<<std::endl;
		plik.close();
		return false;
	}else
	if(plik.fail)
	{
		std::cout<<"nie udalo sie wczytac liczby"<<std::endl;
		return false;
		
	}else
	std::cout<<"liczba="<<iLiczba<<std::endl;
	
	return true;
	
}
bool wczytajZnak(std::ifstream & plik,char & znak)
{
	plik.clear();
	plik>>cZnak;
	if(plik.bad())
	{
		std::cout<<"wystapil blad sprzetowy"<<std::endl;
		plik.close();
		return false;
		
	else
	if(plik.fail())
	{
		std::cout<<"nie udalo sie wczytac znaku!"<<std::endl;
		return false;
		
	}
	return true;
	
}
bool odczytajPlik(std::string sNazwaPliku)
{
	std::ifstream plik;
	plik.open(sNazwaPliku.c_str());
	if(!plik.good)
	{
		std::cout<<"nie udalo sie otworzyc pliku."<<std::endl;
		return false;
	}
	while(!plik.eof())
	{
		int iLiczba;
		char cZnak;
		
		if(!wczytajLiczbe(plik,iLiczba)&&plik.bad())
		return false;
		else
		if(plik.bad)
		return false;
		else
		break;
		
		
	}
	 std::cout<<"niespotykany znak = '"<<cZnak<<"'"<<std::endl;
	 
   }
plik.close();
return true;
}
int main()
{
	if(odczytajPlik("cpp0x.txt"))
std::cout<<"plik zostal wczytany!"<<std::endl;

return 0;

	
}




