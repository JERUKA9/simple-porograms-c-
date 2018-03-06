#include<limits>

int liczba;

std::cin>>liczba;

bool bczysukces=std::cin.good();
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');


