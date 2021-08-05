#include<iostream>
using namespace std;
/*inline int product(int a, int b){  // Inline copies the code to the function call place i.e product(x,y)
    return a*b;                    //  and make program fast but its is case the code is short otherwise the 
                                //  the program will take much memory*/
//}
/*int product(int a,int b){       // This excecutes only once
    static int c=0;             // Next time when this is renned the value of c is retained
    c=c+1;
    return a*b+c;*/
float moneyReceiver(int currentMoney,float factor=1.04){  // Factor is having default argument
    return currentMoney*factor;
}
int main(){
    int x;
    cout<<"Enter the Current Money you have in your bank accont"<<endl;
    cin>>x;
    //int x,y;
    /*cout<<"Enter the first value"<<endl;
    cin>>x;
    cout<<"Enter the second value"<<endl;
    cin>>y;
    cout<<"The product is "<<product(x,y)<<endl;
    cout<<"The product is "<<product(x,y)<<endl;
    cout<<"The product is "<<product(x,y)<<endl;
    cout<<"The product is "<<product(x,y)<<endl;
    cout<<"The product is "<<product(x,y)<<endl;*/
    cout<<"You have Current Money : "<<x<<endl;
    cout<<"The money you will have after one year will be: "<<moneyReceiver(x)<<endl; 
    cout<<"A VIP person will have money: "<<moneyReceiver(x,1.1)<<endl;


    return 0;
}