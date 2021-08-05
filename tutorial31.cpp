#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)            // Default Constructor
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};
void Simple ::printData()
{
    cout << "The value of data1 and data2 are respectively " << data1 << " and " << data2;
}
int main()
{
    Simple s(1);
    s.printData();
    return 0;
}