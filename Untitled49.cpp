#include<iostream>
#include<cstdlib>
int main()
{
	std::cout<<"wylosowanie pierwsze"<<std::rand()<<std::endl;
	int liczba=std::rand();
	std::cout<<"wylosowanie drugie"<<liczba<<std::endl;
	liczba=std::rand();
	std::cout<<"wylosowanie trzecie"<<liczba<<std::endl;
	return 0;
	
}

