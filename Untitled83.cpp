#include<iostream>
using namespace std;
class printdata{
public:
    void print(int i){std::cout<<"print int"<<i<<std::endl;}
    void print(double f){std::cout<<"printing float"<<f<<std::endl;}
};
int main()
{
    printdata pd;
    pd.print(55);
    pd.print(55.3);
}

