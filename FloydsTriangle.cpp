#include<iostream>

using namespace std;

int main(){

    int R;
    cin>>R;

    for (int i = 1; i <= R; i++)
    {   for (int j = 1; j <=i; j++)
     {
        cout<<i<<" ";
     }
    
        cout<<endl;
    }


    cout<<endl;
    cout<<"Floyd's Triangle"<<endl;

    int count=1;
    for (int i = 1; i <=R; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    


    return 0;
}