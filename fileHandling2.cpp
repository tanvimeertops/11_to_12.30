/*file handling : to store the permanently.
fstream 
step-1 ---identifier -to write data from console (write_data) string 
step 2 write_data ---file (ofstream ).create object of ofstream 
step3-- by using object myfile open txt file
step 4--write the data--- myfile<<write_data
step 5 close.


*/

/*write data into the file*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
string write_data;
// cout<<"enter the data to write into file:";
// //read from  console
// getline(cin,write_data);
// //cout<<endl<<write_data;

cout<<"write data into file"<<endl;

ofstream myfile;
//open and create the text file
myfile.open("abhishek.txt",ios::app);//to append in file
//write the data into file 
myfile<<"\nthis for test\n this is abhishek\ntessting the file";
cout<<"data written successfully"<<endl;
myfile.close();

cout<<endl<<"read data from file."<<endl;
string data1;
//object of read data
ifstream read_data;
//open the file from which you wannna read data.

read_data.open("abhishek.txt");
//read multiple line
while(getline(read_data,data1)){
//to print in console
cout<<""<<endl<<data1;
}
cout<<endl<<"data read successful"<<endl;
read_data.close();



}