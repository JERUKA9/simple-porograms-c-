#include<iostream>
using namespace std;
int main()
{
int a [2][2][2];
int i , j,k ;
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
        for(k=0;k<2;k++)
    {
        std::cout<<" enter the value of a["<<i<<"]["<<j<<"]["<<k<<"]=";
std::cin>>a[i][j][k];
    }
for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
        for(k=0;k<2;k++)
        std::cout<<"a["<<i<<"]["<<j<<"] = "<<k<<a[i][j][k]<<std::endl;


return 0;

}
