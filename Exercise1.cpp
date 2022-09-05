#include<iostream>
using namespace std;
class A{
private:
    string title_of_book;
    int no_pages;

public:
    A()
    {
        title_of_book = "c++";
        no_pages = 25;
        // cout<<endl<<"enter title of book:";
        // cin>>title_of_book;
        // cout<<endl<<"enter no of pages:";
        // cin>>no_pages;

        cout << endl
             << "Title of Book::" << title_of_book;
        cout << endl
             << "No. of Pages::" << no_pages;
    }
    A(A &b2)
    {
        title_of_book = b2.title_of_book;
        no_pages = b2.no_pages;

        cout << endl
             << "Title of Book::" << title_of_book;
        cout << endl
             << "No. of Pages::" << no_pages;
    }
};
int main()
{
    cout << "Details of b1::";
    A b1;
    cout << endl
         << "Details of b2::";
    A b2(b1);
    cout << endl
         << "Details of b3::";
    A b3(b1);
}