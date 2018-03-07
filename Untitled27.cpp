#include<iostream>
int main()
{
	bool wynik;
	int liczba;
	
	liczba=-100;
	wynik=liczba>=10||liczba<0||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	liczba=0;
	wynik=liczba>=10||liczba<0||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	liczba=7;
	wynik=liczba>=10||liczba||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	liczba=8;
	wynik=liczba>=10||liczba<0||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	liczba=10;
	wynik=liczba>=10||liczba<0||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	liczba=100;
	wynik=liczba>=10||liczba<0||liczba==7;
	std::cout<<"liczba="<<liczba<<",wynik"<<wynik<<std::endl;
	
	return 0;
	
}
