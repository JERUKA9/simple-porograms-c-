#include<iostream>
#include<string>

int main()
{
	std::string sNapis="[Kurs C++]std::string=Kopiowanie tekstu.";
	std::string sDrugiNapis;
	sDrugiNapis.insert(0,sNapis);
	std::cout<<sDrugiNApis<<std::endl;
	return 0;
}


std::string & insert(
size_type pozycja,
const std::string & tekst,
size_type kopiuj_od_znaku,
size_type liczba_znakow_do_skopiowania
);

#include<iostream>
#include<string>


int main()
{
	std::string sNapis="[Kurs C++] std::string-Kopiowanie tekstu.";
	std::string sFragnmentTekstu;
	sFragmentTekstu.insert(0,sNapis,1,8);
	std::cout<<sFragmentTekstu<<std::endl;
	return 0;
	
}
