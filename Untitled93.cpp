#include<iostream>

void odliczanie(int iStart)
{
	while(iStart>=0)
	{
		std::cout<<iStart<<",";
		--iStart;
	}
	std::cout<<"Boom! :)"<<std::endl;
}
int main()
{
	odliczanie(10);
	odliczanie(-100);
	odliczanie(5);
	return 0;
	
}
