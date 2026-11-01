#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;

    if(A>B && A>C){
        cout<<"The largest number is: "<<A;
    }
    else if(B>A && B>C){
        cout<<"The largest number is: "<<B;
    }
    else {
        cout<<"The largest number is: "<<C;
    }
}
