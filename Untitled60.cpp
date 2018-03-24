#include<iostream>

int main()
{
	int liczby[3];
	std::cout<<"podaj wszystkie 1:";
	std::cin>>liczby[0];
	std::cout<<"podaj liczbe 2:";
	std::cin>>liczby[1];
	liczby[2]=567;
	std::cout<<"liczby[2] wynosi"<<liczby[2]<<std::endl;
	int suma=liczby[0]+liczby[1]+liczby[2];
	std::cout<<"suma trzech liczb wynosi:"<<suma<<std::endl;
	
	return 0;
	
}
