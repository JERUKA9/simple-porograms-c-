#include<iostream>

void wypiszJeden(int a)
{
	std::cout<<"x="<<a<<";";
	std::cout<<std::endl;
}

void wypiszDwa(int a , int b)
{
	std::cout<<"y="<<b<<";";
	std::cout<<"{";
	std::cout<<"x="<<a<<";";
	std::cout<<"}"<<std::endl;
}
void wypiszTrzy(int a , int b , int c)
{
	std::cout<<"z="<<c<<";";
	std::cout<<"{";
	std::cout<<"x="<<a<<";";
	std::cout<<"y="<<b<<";";
	std::cout<<"}"<<std::endl;
}
int main()
{
	for(int x=4; x<=7; x+=3)
	{
		wypiszJeden(x);
		for(int y=3; y<=7; y+=2)
		{
			wypiszDwa(x,y);
			for(int z=1; z<=3; z+=1)
			wypiszTrzy(x,y,z);
			
		}
	}
	return 0;
	
}
