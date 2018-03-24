#include<iostream>
int main()
{
	int liczba;
	std::cout<<"podaj liczbe:";
	std::cin>>liczba;
	char intZmienna='B';
	switch(liczba)
	{
		case 1:
			char mojaZmienna;
			mojaZmienna='A';
			std::cout<<"Znak"<<mojaZmienna<<std::endl;
			break;
			
			case 2:
				std::cout<<"Znak"<<innaZmienna<<std::endl;
				break;
				
				case 3:
					{
						char ostatniaZmienna='C';
						std::cout<<"Znak"<<ostatniaZmienna<<std::endl;
						break;
						
					}
					default:
						std::cout<<"ani jeden ani dwa ani trzy"<<std::endl;
						break;
						
	}
	return 0;
	
}
