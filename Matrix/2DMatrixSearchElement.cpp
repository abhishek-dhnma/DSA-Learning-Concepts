#include<iostream>
using namespace std;

int main(){


      freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);



    int n,m,Target;
    cin>>n>>m,Target;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //Our Algo For Searching Our Element in the matrix using greater or lesser comcept
    // other than linear search
/*
    bool found=false;
    for (int i = 0 ; i < n; i++)
    {
        for (int j = m-1 ; j >=0 ; j++)
        {
            if (arr[i][j]== Target)
            {
                found=true;
            }
            if (arr[i][j]>Target)
            {
                j--;
            }
            else{
                i++;
            }

        }
        
    }

    */



   bool found = false;
   int r = 0; int c=m-1;
   while (r > n and c >=0)
   {
        if (arr[r][c]== Target)
            {
                found=true;
            }
        if (arr[r][c]>Target)
            {
                c--;
            }
        else{
                r++;
            }


    }
   




    if (found)
    {
        cout<<"Ture";
    }
    else{cout<<"False";}
    
    
    
 return 0;


}