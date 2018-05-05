#include<iostream>

int main()
{
    int tablica[ 999 ];
    wylosujLiczby( tablica, 999, 4, 10 );
    wypiszLiczby( tablica, 999 );
    int iSuma = obliczSume( tablica, 999 );
    std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
    return 0;
}
