#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void setData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
};
class ScientificCalculator
{
protected:
    float c, d;

public:
    void setData1(float num3, float num4)
    {
        c = num3;
        d = num4;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void show()
    {
        cout << "Using Simple Calculator " << endl;
        cout << "The first value is " << a << endl;
        cout << "The second value is " << b << endl;
        cout << "Summation of first and second value is " << a + b << endl;
        cout << "Substraction of first and second value is " << a - b << endl;
        cout << "Multiplication of first and second value is " << a * b << endl;
        cout << "Division of first and second value is " << a/b << endl;
        cout << "Using Scientific Calculator " << endl;
        cout << "The third value is " << c << endl;
        cout << "The fourth value is " << d << endl;
        double result, result1, result2, result3, result4, result5, result6, result7;
        double e, f;
        e = c * 3.14159 / 180;
        result = sin(e);
        result1 = cos(e);
        result2 = tan(e);
        result3 = sqrt(c);
        f = d * 3.14159 / 180;
        result4 = sin(f);
        result5 = cos(f);
        result6 = tan(f);
        result7 = sqrt(d);
        cout << "Value of sin" << int(c)<< " is " << result << endl;
        cout << "Value of cos" << int(c) << " is " << result1 << endl;
        cout << "Value of tan" << int(c) << " is " << result2 << endl;
        cout << "Value of root of " << int(c) << " is " << result3 << endl;
        cout << "Value of sin" << int(d) << " is " << result4 << endl;
        cout << "Value of cos" << int(d) << " is " << result5 << endl;
        cout << "Value of tan" << int(d) << " is " << result6 << endl;
        cout << "Value of root of " << int(d) << " is " << result7 << endl;
        cout << "We are ending the program." << endl;
        cout << "Thank you" << endl;
    }
};
int main()
{
    HybridCalculator a1;
    a1.setData(60, 30);
    a1.setData1(3.0, 60.0);
    a1.show();
    return 0;
}