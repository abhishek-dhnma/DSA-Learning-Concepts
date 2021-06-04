#include<iostream>
using namespace std;
int main(){


        freopen( "input.txt","r",stdin );
    freopen( "Output.txt","w",stdout ); 
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }


    // SPRIAL MATRIX TRAVERSE ALGO

    int top = 0, down = n-1, left = 0, right = m-1;

    while (top<=down && left<=right)
    {   

        //Left => Right
        
        for (int i = left ; i <= right ; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        

        // Top => Down

        
        
            for (int i = top ; i <= down; i++)
            {
                cout<<arr[i][right]<<" ";
            }
            
            right--;
        
        
        //Right => Left  [ NOW WE GOING REVERSE SO i >= left not ]
        
        
            for (int i = right; i >= left; i--)
            {
                cout<<arr[down][i]<<" ";
            }
            
            down--;
        

        //Down => Top

            for (int i = down; i >= top; i-- )
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        
        
        
    }
    
    return 0;
}