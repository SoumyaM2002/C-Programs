#include<iostream>
using namespace std;
struct employee 
{
    /* data */
    int eID;
    char favouriteChar;
    float salary;
};
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast,lunch,dinner};   //enum
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    meal m2=breakfast;
    cout<<m2<<endl;
    cout<<(m2==0)<<endl;
    union money m1;         // using union
    m1.rice=9;
    m1.car='s';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    struct employee soumya;     //using structure
    soumya.eID=1564;
    soumya.favouriteChar='S';
    soumya.salary=70000;
    cout<<soumya.salary<<endl;
    cout<<soumya.favouriteChar<<endl;

    return 0;
}