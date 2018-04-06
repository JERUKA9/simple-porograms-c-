#include<iostream>
#include<memory>


int main()
{
	std::weak_ptr<int> weak;
	
	std::cout<<"expired:"<<weak.expired()<<";adress:"<<weak.lock()<<'\n';
	{
		std::shared_ptr<int> strong (new int);
		
		weak=strong;
		
		std::cout<<"expired:"<<weak.expired()<<";adress:"<<weak.lock()<<'\n';
		
	}
	
	std::cout<<"expired:"<<weak.expired()<<";adress:"<<weak.lock()<<'\n';
	
}
