#include<iostream>
using namespace  std;
class shape{
protected:
    float l;
public:
    void get_data(){
    std::cin>>l;
    }
    virtual float area() = 0;

};
class square :  public shape{
 public:
     float area()
     {

         return l * l;

     }



};
class circle : public shape
{
public:
    float area(){return 3.14 * l * l};
};
int main()
{
square sq(2);
sq.area();


}
