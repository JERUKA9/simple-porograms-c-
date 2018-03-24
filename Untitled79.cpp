#include<iostream>
#include<string>

int main()
{
	std::string imie;
	std::string nazwisko;
	std::string o_sobie;
	std::cout<<"podaj imie:";
	std::cin>>imie;
	std::cout<<"podaj nazwisko:";
	std::cin>>nazwisko;
	std::cout<<"napisz zdanie o sobie:";
	std::cin.sync();
	std::getline(std::cin,o_sobie);
	std::cout<<"twoje imie to :"<<imie<<std::endl;
	std::cout<<"twoje nazwisko to :"<<nazwisko<<std::endl;
	std::cout<<"napisales o sobie :"<<o_sobie<<std::endl;
	return 0;
	
}
