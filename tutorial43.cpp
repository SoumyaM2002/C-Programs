#include<iostream>
using namespace std;
/* student--->test
   student--->sports
   test--->result
   sports--->result
*/
class Student{
    protected:
        int roll_no;
    public:
        void set_Number(int a){
            roll_no=a;
        }
        void print_Number(void){
            cout<<"Your roll no. is "<<roll_no<<endl;
        }
};
class Test : virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_Marks(float m1,float m2){
            maths=m1;
            physics=m2;
        }
        void print_Marks(void){
            cout<<"Your result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }

};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_Score(float sc){
            score=sc;
        }
        void print_Score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};
class Result : virtual public Test,virtual public Sports{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            print_Number();
            print_Marks();
            print_Score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    Result soumya;
    soumya.set_Number(10003);
    soumya.set_Marks(84.9,80.6);
    soumya.set_Score(9);
    soumya.display();
return 0;
}