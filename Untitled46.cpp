#include<iostream>
using namespace std;
int main()
{
int a [2][2];
int i , j;
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
        std::cout<<" enter the value of a["<<i<<"]["<<j<<"] = ";
std::cin>>a[i][j];
    }
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
        std::cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<std::endl;


return 0;

}
