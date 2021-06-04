#include<iostream>
using namespace std;

int main(){


    freopen( "input.txt","r",stdin );
    freopen( "Output.txt","w",stdout ); 

    int n;
    cin>>n;
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    
    int mx= -1999999;
    

    for (int i = 0; i < n; i++)
    {
        mx = max(mx , arry[i]);
        cout<<mx<<endl;
    }
    



    return 0;
}