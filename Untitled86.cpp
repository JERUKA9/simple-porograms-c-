std::string tekst="abc";
tekst+="def";
tekst.append("ghi");
std::cout<<tekst;

std::strong tekst ="abc";
tekst.insert(1,"def");
std::cout<<tekst;

std::string & erase (size_type pozycja,size_type liczba_znakow);

#include<iostream>
#include<string>


int main()
{
	std::string sNapis="[Kurs C++] std::string-Modyfikowanie tekstu.";
	sNApis.erase(10,14);
	std::cout<<sNApis<<std::endl;
	return 0;
	
}
