#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    // Selection contol structure
    /*if((age<18)&&(age>0)){
        cout<<"You are not eligible to vote"<<endl;
    }
    else if(age>18){
        cout<<"Eligible to vote"<<endl;
    }
    else if(age<0){
        cout<<"Invalid age"<<endl;
    }
    else{
        cout<<"You did not enter any age";
    }*/
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    
    default:
        cout<<"no special case"<<endl;
        break;
    }
    return 0;

}