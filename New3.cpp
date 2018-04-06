#include<cstdio>

class CBazowa
{
   public:
       CBazowa() ;
       virtual ~CBazowa();

};
class CPochodna
:public CBazowa
{
public:
    CPochodna();
    ~CPochodna();

};

int main()
{
   CBazowa * pBase= new CPochodna;
   delete pBase;
   return 0;


}

CBazowa::CBazowa()
{

    printf("CBazowa()\n");
}
CBazowa::~CBazowa()
{
    printf("~CBazowa()\n");

}
CPochodna::CPochodna()
{
    printf("CPochodna()\n");

}
CPochodna::~CPochodna()
{
    printf("~CPochodna()\n");

}
