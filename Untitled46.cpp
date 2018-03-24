include<iostream>
int main()
{
	int ile;
	std::cout<<"ile razy wypisac napis ?";
	std::cin>>ile;
	if(ile>0)
	do
	{
		std::cout<<"napis"<<std::endl;
		ile--;
		
	}while(ile>0);
	
}    return 0;


