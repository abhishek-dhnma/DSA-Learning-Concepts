#include<iostream>
#include <limits.h>
using namespace std;




int main(){


    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    
    int r,c;
    cin>>r>>c;
    
    int arr[r][c];   

    for(int i=0; i<r;i++){
        
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    
    int i,j,sum,Max= INT32_MIN;
    
    for(int i=0; i<4;i++){
        
        for(int j=0; j<4 ;j++){
            
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if (sum > Max)
            {
                Max = sum;
            }
            
        }
    }

        cout<<Max;
    
    
    return 0;
}