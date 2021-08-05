#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x;
    int y;

public:
    void fetchData(int a, int b)
    {
        x = a;
        y = b;
    }
    friend point calData(point o1, point o2);
    friend void printNumber();
    void printNumber(){
        float q;
        q=(x*x+y*y);
        cout << "Distance between is "<<sqrt(q)<<endl;

    }
};
point calData(point o1, point o2)
    {
        point m;
        m.fetchData((o2.x - o1.x),(o2.y - o1.y));
        return m;
        
    }

int main()
{
    point c1, c2, c3;
    c1.fetchData(1, 0);
    c2.fetchData(70, 0);
    c3=calData(c1,c2);
    c3.printNumber();
    return 0;
}