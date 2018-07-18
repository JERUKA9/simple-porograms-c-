#include<iostream>

using namespace std;


int main()
{
int a;
for(int i =1;i<=3;i++){
 std::cout<<"enter 1 or 2:";
std::cin>>a;
if(a==1|| a==2)
    break;
else
    continue;

}
switch(a){

case 1 : std::cout<<"you entered 1 ";
break;
case 2 : std::cout<<"you entered 2";
break;
default : std::cout<<"you should enter only 1 or 2 try next time ";
break;

}



 return 0;

}
