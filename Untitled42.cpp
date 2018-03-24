#include<iostream>
int main()
{
	int liczba;
	std::cin>>liczba;
	switch(liczba)
	{
		case 2:
			std::cout<<"dwa"<<std::endl;
			break;
			case 1:
				std::cout<<"jeden"<<std::endl;
				break;
				case 3:
					std::cout<<"trzy"<<std::endl;
					break;
					default:
						std::cout<<"ani jeden ani dwa ani trzy"<<std::endl;
						break;
						
	}
	return 0;
	
}
