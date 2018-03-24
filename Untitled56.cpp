#include<iostream>

float dodawanie_inne()
{
	float a;
	std::cin>>a;
	float b;
	std::cin>>b;
	return a+b;
}
int main()
{
  std::cout<<"wprowadz dwie liczby:";
float tu_bedzie_wynik=dodawanie_inne();
std::cout<<"wynik dodwania wynosi:"<<tu_bedzie_wynik<<std::endl;
return 0;

}

