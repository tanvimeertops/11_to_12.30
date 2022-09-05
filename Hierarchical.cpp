/*hierarchical inheritance is used less because objects are created more.*/
#include<iostream>
using namespace std;
class Marks{
    public:
    int n;
    int marks[5];
void getStudents(){
cout<<"enter no of students:";
cin>>n;
}

int roll_no;
string name;

};
class Physics:public Marks{
    public:
    int total_physics=0;
    void getMarks(){
        for (int i = 0; i<n; i++)
        {
            cout<<"Enter marks in physics:";
            cin>>marks[i];
            total_physics+=marks[i];
        }
    }
   void getAverage(){
        cout<<"average of physics:"<<(float)total_physics/n;
    }
};
class Chemistry:public Marks{
public:
    void getMarks(){
        for (int i = 0; i<n; i++)
        {
            cout<<"Enter marks in Chemistry:";
            cin>>marks[i];
        }
        
    }
};
class Maths:public Marks{

};
int main(){
Physics p;
p.getStudents();
p.getMarks();
p.getAverage();


}