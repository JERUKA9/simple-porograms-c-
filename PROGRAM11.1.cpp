#include <iostream>
int main()
{
    int wiek;
    std::cin >> wiek;
    if( wiek >= 18 )
    if( wiek <= 100 )
    {
        std::cout << "Twierdzisz, ze jestes pelnoletni..." << std::endl;
        std::cout << "ale czy to kogos interesuje? :)" << std::endl;
    }
    std::cout << "Koniec" << std::endl;

    return 0;
}

