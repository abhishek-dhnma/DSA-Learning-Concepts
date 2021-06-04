#include<iostream>
using namespace std;

int main(){

int rows,columns;

cin>>rows>>columns;
int i;
for ( i = 1; i<=rows; i++)
{
    for (int b=1; b<=columns; b++)
    {
        cout<<"&";
    }
    cout<<endl;
}


cout<<endl;
cout<<"Hollow Rectangle"<<endl;

//Hollow Rectangle

for ( i = 1; i<=rows; i++)
{
    for (int b=1; b<=columns; b++)
    {
        if (i==1 || i==rows || b==1 || b==columns)

        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}


return 0;
}