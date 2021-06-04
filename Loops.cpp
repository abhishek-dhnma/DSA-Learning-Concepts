#include<iostream>
using namespace std;

int main(){



    //For Loop

    int N,sum = 0;
    cin>>N;

    
    for (int i = 0; i <= N; i++)
    {   
        sum = sum+i;        
    }
    
    cout<<sum<<endl;


    //While Loop

    int b;
    cin>>b;

    while (b>0)
    {
        cout<<b<<endl; 
        cin>>b;
    }
    
    return 0;
}