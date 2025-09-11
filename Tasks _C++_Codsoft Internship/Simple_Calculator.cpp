#include<iostream>
using namespace std;

int main(){
    double num1, num2;
    char opr;

    cout<<"Welcome to Simple calculator! "<<endl;

    cout<<"\nEnter the first number: "<<endl;
    cin>>num1;

    cout<<"\nEnter the second number: "<<endl;
    cin>>num2;

    cout<<"\nChoose an Operation to perform (+,-,*,/): "<<endl;
    cin>>opr;

    switch (opr)
    {
    case '+':
        cout<<"\nResult = "<<num1+num2<<endl;
        break;
    
    case '-':
        cout<<"\nResult = "<<num1-num2<<endl;
        break;

    case '*':
        cout<<"\nResult = "<<num1*num2<<endl;
        break;

    case '/':
        if(num2!=0){
            cout<<"\nResult = "<<num1/num2<<endl;
            break;
        }
        else{
            cout<<"\nError!, Division by zero "<<endl;
            break;
        }

    default:
        cout<<"\nInvalid Operator!"<<endl;
        break;
    }
}