#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter Operation you want to operate"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    

    default:
        break;
    }
}