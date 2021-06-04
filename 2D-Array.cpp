#include<iostream>
using namespace std;

int main(){


    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);

    int r,c;
    cin>>r>>c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}