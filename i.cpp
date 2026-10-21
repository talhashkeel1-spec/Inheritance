#include <iostream>
#include<string>
using namespace std;

class scooty{
public:
    string name;
    int milage; 
};
class bike : public scooty{
    public:
    int gear;

};
int main()
{
    bike s1;
   s1.gear=6;
   s1.milage=23;
   s1.name="Honda";
   cout<<s1.name<<" "<<s1.gear<<" "<<s1.milage<<endl;
   scooty b1;
   b1.name="Scooty";
   cout<<b1.name;   
    return 0;

};