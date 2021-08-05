#include<iostream>
#include<cmath>
using namespace std;

int main(){
      double x=1.570795;
      double result;
      result=sin(x);
      cout<<"Sin(x)= "<<result<<endl;
      double degree=90;
      x= degree*3.14159/180;
      result=sin(x);
      cout<<"Sin(x)= "<<result<<endl;
      double y=45.0;
      double result1;
      long double result2;
      result1=y*3.14159/180;
      result2=tan(result1);
      cout<<"Tan(x)= "<<result2<<endl;

return 0;
} 