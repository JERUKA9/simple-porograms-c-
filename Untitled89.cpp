#include<iostream>

int main()
{
	for(int x =0 ; x<8; x++)
	{
		std::cout<<"x="<<x<<std::endl;
		if(x==2 || x==3 ||x==5)
		{
			std::cout<<"teraz 'x' wynosi"<<x;
			std::cout<<"- wywoluje continue!"<<std::endl;
			continue;
		}
		std::cout<<"koniec kroku x="<<x<<std::endl;
	}
	return 0;
	
}
