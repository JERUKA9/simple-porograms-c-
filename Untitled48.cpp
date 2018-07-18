#include<iostream>
using namespace std;
int main()
{
int a[2][2],b[2][2],c[2][2];
int i,j;
for(i=0;i<2;i++)
    for(j<0;j<2;j++){
    std::cout<<"a["<<i<<"]["<<j<<"] = ";
    std::cin>>a[i][j];

    }
    for(i=0;i<2;i++)
    for(j<0;j<2;j++){
    std::cout<<"b["<<i<<"]["<<j<<"] = ";
    std::cin>>b[i][j];

    }
for(i=0;i<2;i++)
    for(j<0;j<2;j++){
    c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<2;i++)
    for(j<0;j<2;j++){
         std::cout<<c[i][j];
         if(j==1)
            std::cout<<std::endl;

    }







return 0;

}
