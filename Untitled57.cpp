#include<iostream>
using namespace std;

int main()
{
 int a =30;
  int& b = a;
  std::cout<<a;
  b = 45;
  std::cout<<a;
  a = 99;
  std::cout<<b;

return 0;
}

