#include <iostream>
using namespace std;
int main(){
    int n,y,m,d,r;
    cout<<"Enter no. day:";
    cin>>n;

    y=n/365;
    r=n%365;
    m=r/30;
    d=r%30;

    cout<<y<<" years, "<<m<<" months, "<<d<<" days";

}