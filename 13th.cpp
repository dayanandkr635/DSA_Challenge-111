#include <iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"Please enter a positive integer."<<endl;
    }
    return 0;
}
