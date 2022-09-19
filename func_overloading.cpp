/*2.compile time
        -->function overloading
        -->constructor overloading
        -->operator overloading*/
/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

//function overloding : same name but different parameter
       #include<iostream>
       using namespace std;
       class A{
        int a,b;
        public:
        void calc(){
            cout<<"enter a:";
            cin>>a;
            cout<<"enter b:";
            cin>>b;
            cout<<"sum:"<<a+b<<endl;
        }
        void calc(int x,int y,int z){
                cout<<"multiplication:"<<x*y*z<<endl;
        }
        void calc(double p,double q){
                cout<<"sub:"<<p-q<<endl;
        }
        void calc(int x,int y){
            cout<<"div:"<<x/y<<endl;
        }
       };
       int main(){
            A a;
            a.calc();
            a.calc(10,20,10);
            a.calc(10.20,10.200);
            a.calc(10,2);
       }