#include <iostream>
#include<cstdlib>
using namespace std;

int main(){
    int num1, num2;
    char operators;
    cout<<"Enter the operator(+, -, *, / ) : ";
    cin>>operators;
    cin>>num1 >>num2;
    switch(operators){
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<(num1+num2);
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<(num1-num2);
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<(num1*num2);
            break;
        case '/':
            if(num2!=0){
                cout<<num1<<" / "<<num2<<" = "<<(num1/num2);
            }
            else{
                cout<<"Cannot devide by zero";
            }
            break;
        default:
            cout<<operators<<" is an invalid operator";
      
    }
    return 0;
}