/*We want to calculate the total marks of each student of a class 
in Physics,Chemistry and Mathematics 
and the average marks of the class. 
The number of students in the class are entered by the user. 
Create a class named Marks with data members for 
roll number, 
name and 
marks. 
Create three other classes inheriting the Marks class, 
namely Physics, Chemistry and Mathematics, 
which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.
/*output
Enter the num of student: 3
roll no:1
total marks : 156
roll no:2
total marks : 156
roll no:3
total marks : 156
*/


#include<iostream>
using namespace std;
class Marks{
    public:
    int roll_number,n,sum;
    int *mark;

    void genMarks(int no){
        n=no;
        mark=new int[n];
        for (int i = 0; i < n; i++)
        {
        cout<<endl<<"marks: "<<i+1<<":";
        cin>>mark[i];
        }
    }

    int sum_of_marks(){
        sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=sum+mark[i];
        }
        return sum;
    }
};
class Physics:public Marks{

};
class Chemistry:public Marks{

};
class Mathematics:public Marks{

};
int main(){
    int num;
    cout<<"enter the number of student:";
    cin>>num;
    
    Physics *p=new Physics[num];//array of object
    Chemistry *c=new Chemistry[num];
    Mathematics *m=new Mathematics[num];
    for (int i = 0; i < num; i++)
    {
        p[i].roll_number=c[i].roll_number=m[i].roll_number=i+1;
        cout<<"enter marks for roll no"<<p[i].roll_number<<endl;
        cout<<"enter marks in physics:";
        p[i].genMarks(2);
        cout<<"sum of physics:"<<p[i].sum_of_marks()<<endl;
        cout<<"enter marks in chemistry:";
        c[i].genMarks(2);
       cout<<"sum of chemistry:"<<c[i].sum_of_marks()<<endl;
        cout<<"enter marks in maths:";
        m[i].genMarks(2);
        cout<<"sum of maths:"<<m[i].sum_of_marks()<<endl;
    }
    
    for (int i = 0; i < num; i++)
    {
       cout<<"roll no:"<<p[i].roll_number<<endl;

    }


    
}