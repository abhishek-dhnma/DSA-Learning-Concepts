#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    for (int i = 1; i <=N;i++)
    {
        
        
      int ptrn= N+1-i;
        for (int j =1 ; j <= ptrn; j++)
        {
            cout<<j<<" ";
        }
        
        
        cout<<endl;
        
    }
    


    return 0;
}