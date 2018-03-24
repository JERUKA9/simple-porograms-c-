#include<iostream>
int main()
{
	int liczba;
	
	int liczba2;
	
	std::cout<<"wprowadz pierwsza liczbe:";
	
     
    std::cin>>liczba;
    
    
    std::cout<<"wprowadz druga liczbe:"; 

    std::cin>>liczba2;
    
	switch(liczba,liczba2)
	{
			
				case 1:
			std::cout<<"odejmowanie-="<<liczba-liczba2;
			break;
			
				case 2:
			std::cout<<"dzielenie/="<<liczba/liczba2;
			break; 
			
			case 3:
			std::cout<<"mnozenie*="<<liczba*liczba2;
			break;
		
			
			case 4:
			std::cout<<"dodawanie+="<<liczba+liczba2;
			break;
		
			
			default:
				std::cout<<"zadne z powyzszych dzialan";
				break;
			
			
			
	}
	
	return 0;
	
	
}
