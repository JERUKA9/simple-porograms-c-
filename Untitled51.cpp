#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(NULL))
	std::cout<<"losowanie pierwsze"<<((std::rand()%50)+7)<<std::endl;
	int liczba=(std::rand()%50)+7;
	std::cout<<"wylosowanie  drugie"<<liczba<<std::endl;
	liczba=(std::rand()%50)+7;
	std::cout<<"wylosowanie trzecie"<<liczba<<std::endl;
	return 0;
	
}
