#include<iostream>
using namespace std;
class Employee{
    int id;
    int static count;
    public :
    void setData(void){
        cout<<"Enter the Employee id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of Employee is "<<id<<" and the Employee no. is "<<count<<endl;
    }
    static void getCount(void){
        //cout<<id;  throws an error
        cout<<"The count is "<<count<<endl;
    }
};
// Count is the static data member of class Employee
int Employee :: count;
int main(){
Employee rohan, soumya, mrin;
rohan.setData();
rohan.getData();
Employee :: getCount();

soumya.setData();
soumya.getData();
Employee :: getCount();


mrin.setData();
mrin.getData();
Employee :: getCount();



return 0;
}