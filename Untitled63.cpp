#include<iostream>

void wypelnijTablice(int t[],int irozmiar)
{
	std::cout<<"podaj"<<irozmiar<<"liczb:"<<std::endl;
	int i=0;
	do
	{
		std::cin>>t[i];
		i++;
	}while(i<irozmiar);
}
int main()
{
	int moja_tablica[5];
	wypelnijtablice(moja_tablica,5);
	int i=0;
	do
	{
		std::cout<<moja_tablica[i]<<",";
		i++;
	}while(i<5);
	
	return 0;
	
}
