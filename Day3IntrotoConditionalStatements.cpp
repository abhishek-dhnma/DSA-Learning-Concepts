#include<iostream>
using namespace std;

int main(){


freopen("input.txt","r",stdin);
freopen("Output.txt","w",stdout);
int n;
cin>>n;


if (n%2==0)
{
    if (n<=2 && n>=5)
    {
        cout<<"Not Weird";
    }
    else if (n>=6 && n<=20)
    {
        cout<<"Weird";
    }
    else {
        cout<<"Not Weird";
    }
}
else{
   cout<<"Weird";
}


    return 0;
}