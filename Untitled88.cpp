#include <iostream>

int main()
{
    for( int x = 0; x < 10; x++ )
    {
        if( x == 7 )
        {
            std::cout << "Teraz 'x' wynosi " << x << "." << std::endl;
            std::cout << "Przerywam petle!" << std::endl;
            break;
        }
        std::cout << "x = " << x << std::endl;
    }
    std::cout << "Teraz jestem tu :)" << std::endl;
    return 0;
}
