#include <iostream>
#include <cstdlib>
#include <ctime>

losuj_liczbe()
{    srand( time( NULL ) );
     int liczba= std::rand()%100+1;
}
int main()
{
      int liczba = losuj_liczbe();

}
