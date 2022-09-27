/*Write a program of to sort the array using templates class.*/

#include<iostream>
using namespace std;

template<typename T>
class A{
    private:
    int n;
    T *a;
public:
void getData(int no){
n=no;
delete[]a;
a=new T[n];
for (int i = 0; i < n; i++)
{
    cout<<"enter val:";
    cin>>a[i];
}
}

void sort(){
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    

}

};
int main(){
int num;
cout<<"enter the no of data:";
cin>>num;
 A <int>obj1;
 A <char>obj2;
 A <double>obj3;

cout<<"enter integer val:"<<endl;
 obj1.getData(num);
 cout<<"enter character val:"<<endl;
 obj2.getData(num);
 cout<<"enter double val:"<<endl;
 obj3.getData(num);

 cout<<"sorted integer:"<<endl;
 obj1.sort();
  cout<<"sorted character:"<<endl;
 obj2.sort();

  cout<<"sorted double value:"<<endl;
 obj3.sort();
}