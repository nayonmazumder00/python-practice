#include<iostream>
using namespace std;

int main(){
    char str[40];
    int m1,m2,m3, avg;
    cout<< "Enter your name : ";
    cin >> str;

    cout<< "Enter Obtained Marks: ";
    cin >> m1>>m2>>m3;
    avg= (m1+m2+m3)/3;

    cout<<"Your Name is "<< str;
    cout << endl<< "And your Average Marks are: "<< avg<<endl;
    return 0;
}