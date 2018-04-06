#include<fstream>
std::ifstream plik;

std::ifstream plik;
plik.open("C:\\odczyt.txt");

if(plik.good())
{
	
}else
{
	
}

std::string odczytanyTekst
std::getline(plik,odczytanyTekst);


std::string wiersz;
for(bool bWczytano=std::getline(plik ,wiersz);bWczytano;bWczytano=std::getline(plik,wiersz))
std::cout<<wiersz<<std::endl;

plik.close();

