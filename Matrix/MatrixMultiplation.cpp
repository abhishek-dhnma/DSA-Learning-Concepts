#include<iostream>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);

    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    int arr1[n1][n2];

    //Input Matric Elements
    for (int i = 0; i < n1; i++)
    {
        for (int j =0; j < n2; j++)
        {
            cin>>arr1[i][j];
        }
    }

    
    int arr2[n3][n4];

    for (int k = 0; k < n3; k++)
    {
        for (int l = 0; l < n4; l++)
        {
            cin>>arr2[k][l];
        }
        
    }

    int ans[n1][n4];

    for (int k = 0; k < n1; k++)
    {
        for (int l = 0; l < n3; l++)
        {
            arr2[k][l]=0;
        }
        
    }


    // MATRIX MULTIPLATION ALGO 

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {   
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
            
        }
        
    }

    //Output

    for (int k = 0; k < n1; k++)
    {
        for (int l = 0; l < n3; l++)
        {
            cout<<arr2[k][l]<<" ";
        }
        cout<<endl;
        
    }

    
    
    
return 0;

}