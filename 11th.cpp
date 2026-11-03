#include <iostream>
using namespace std;
int main(){
    int a,b;
    char cr;

    cin>>a>>b>>cr;

    switch(cr){
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
                cout<<a<<" / "<<b<<" = "<<a/b;
                break;
        default:
            cout<<"Invalid operator.";
            break;
    }

  
}
