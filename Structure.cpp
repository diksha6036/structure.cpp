//DIKSHA MALIK'S CODE---------2110990446
//2ND YEAR
#include <iostream>
using namespace std;

 typedef struct structure
{
    /* data */
    int first;
    char second;
    bool third;
} mystr;

int main()
{

    mystr diksha;
    diksha.first = 1;
    diksha.second = 'd';
    diksha.third = true;

    cout<<"The value of first is: "<<diksha.first<<endl; //1
    cout<<"The value of second is: "<<diksha.second<<endl; //2
    cout<<"The value of third is: "<<diksha.third<<endl; //3

    return 0;
}
