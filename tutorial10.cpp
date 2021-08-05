#include<iostream>
using namespace std;

int main(){
    int i=0;
    int marks[]={23,45,67,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //marks[0]=555;
    /*for(int i=0;i<4;i++){         Printing an array using for loop
        cout<<marks[i]<<endl;
    }*/
    while(i<4){
        cout<<"The values of marks is "<<marks[i]<<endl;   //Printing an array using while loop
        i++;
        }

 /*   int i=0;
    do{
        cout<<"The values of the marks is "<<marks[i]<<endl;
        i++;
    }while(i<4);*/
    int* p=marks; // it directly points to the values of marks array without using & 
    cout<<"Value at *p "<<*(p)<<endl;
    cout<<"Value at *p+1 "<<*(p+1)<<endl;
    cout<<"Value at *p+2 "<<*(p+2)<<endl;
    cout<<"Value at *p+3 "<<*(p+3)<<endl;
    cout<<*(p++)<<endl; // first it prints the value at position 0 in marks array then it increments the value of p
    cout<<*(p)<<endl;  //it prints the next value i.e at positon 1 of marks array
    cout<<*(++p); // first the index value is incremented then the value at that index is printed
    
    
    
    return 0;
}