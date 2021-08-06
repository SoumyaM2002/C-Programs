#include<iostream>
#include<string>
using namespace std;

int main(){
int x,y;
cin>>x>>y;
string arr[]={"one","two","three"};
 for(int i=x;i<=y;i++){
     cout<<arr[i-1]<<endl;
     }

return 0;
}
