#include <iostream>
int wczytajLiczbe()
{
 //TODO: tu Tw�j kod
    int liczba;
    std::cin >> liczba;
    return liczba;
}

int main()
{
    std::cout << "Podaj liczbe: ";
    int liczba = wczytajLiczbe();
    std::cout << "Podales liczbe: " << liczba << std::endl;
    return 0;
}
