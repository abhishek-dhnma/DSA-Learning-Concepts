#include<iostream>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);

    int n;
    cin>>n;
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    
    int sum =0;
    
    for (int i = 0; i < n; i++)
    {   sum =0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arry[j];

            cout<<sum<<endl;

        }
        
    }


     return 0;

}