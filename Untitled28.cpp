#include<iostream>

using namespace::std;
int main()
{
 int a ,b,c;

 std::cout<<"enter the three values\n";
 std::cin>>a>>b>>c;
 if(a>b&&a>c)
    std::cout<<"a contains the largest value";
 if(b>a&&b>c)
    std::cout<<"b contains the largest value";
 if(c>a&&c>b)
    std::cout<<"c contains the largest value";


 return 0;

}
