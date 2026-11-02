#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float m,h;
    cin>>m>>h;

    double bmi=m/(h*h);

    cout<<"BMI: "<<fixed<<setprecision(2)<<bmi<<endl;

    if(bmi<18.5) cout<<"Category: Underweight";
    else if(bmi>=18.5 && bmi<24.9) cout<<"Category: Normal weight";
    else if(bmi>=25 && bmi<29.9) cout<<"Category: Overweight";
    else cout<<"Category: Obesity"; 

}
