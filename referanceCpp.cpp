#include<iostream>
using namespace std;

// Using Referance Concept in C++

int add(int &a , int &b){
a++;
b++;

return a+b;

}



int main(){


    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    
    int a,b;
    cin>>a>>b;
    cout<<"Original: " << a<<" "<<b<<endl;

    int result = add(a,b);

    cout<<"Result: "<<result<<endl;

    cout<<"After: "<<a<<" "<<b;

    return 0;
}