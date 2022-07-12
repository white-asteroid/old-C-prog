
#include <iostream>

using namespace std;

class base
 {

 public:
    virtual void hi()
    {
        cout<<"\n base class is saying hi to you \n";
    }

    void hoddy()
    {
        cout<<"\nbase class is asking \"how u doin?\" \n";
    }
 };

 class der : public base
 {
     public:
    void hi()
    {
        cout<<"\nderived class is saying hi to you \n";
    }

    void hoddy()
    {
        cout<<"\n derived class is asking \"how u doin?\" \n";
    }
 };

int main()
{
    der a;
    //base b;
    base *ab;
    ab = &a;
    ab->hi();
    ab->hoddy();


    return 0;
}
