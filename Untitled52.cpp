#include<iostream>
void moja_funkcja;
{
	std::cout<<"[1]-dodawanie"<<std::endl;
	std::cout<<"[2]-odejmowanie"<<std::endl;
	std::cout<<"[0]-wyjscie z programu"<<std::endl;
}
void dodawanie()
{
	std::cout<<"jeszcze nie oprogramowano"<<std::endl;
	
}
void odejmowanie()
{
	dodawanie();
}
int main()
{
	std::cout<<"w programie sa dostepne nastepujace opcje:"<<std::endl;
	moja_funkcja();
	std::cout<<"zycze przyjemnego korzystania z programu"<<std::endl<<std::endl;
	int liczba;
	do
	{
		moja_funkcja();
		std::cin>>liczba;
		switch(liczba)
		{
			case 1:
				dodawanie();
				break;
				case 2:
					odejmowanie();
					break;
					default:
						break;
		}
	} while(liczba !=0)
}   return 0;

