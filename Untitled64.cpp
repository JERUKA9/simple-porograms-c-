#include<iostream>

bool czygodzinapoprawna(int godz, int min,int sek)
{
	if(godzina<0||godzina>23)
	return false;
	
	if(min<0||min>59)
	return false;
	
	if(sek<0||sek>59)
	return false;
	
	retrun true;
	
}

void komunikatczasu(bool bwynik)
{
	if(bwynik)
	std::cout<<"czas jest poprawny"<<std::endl;
	else
	std::cout<<"czas jest niepoprawny"<<std::endl;
}
int main()
{
	komunikatczasu(czygodzinapoprawna(24,30,50));
	komunikatczasu(czygodzinapoprawna(12,88,50));
	komunikatczasu(czygodzinapoprawna(1,00,99));
	komunikatczasu(czygodzinapoprawna(7,33,01));
	
	return 0;
	
}
