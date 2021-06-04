#include<iostream>
using namespace std;

int main(){


    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);


    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }


        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        
    }


    cout<<"Searching A Element"<<endl;
    bool flag = false;
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   if (arr[i][j] == x)
            {
                
            cout<<"Co-ordinate: "<<i<<" "<<j<<"\n";
            flag= true;

            }
            
        
            
        }
        
    }

    if (flag)
    {
        cout<<"ELemet Found";


    }
    else{
            cout<<"Element Not Found";
            }

    
    

    return 0;


}