#include<iostream>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);


    int arow, acol, brow, bcol;
    cin>>arow>>acol>>brow>>bcol;
    int a[arow][acol], b[brow][bcol];

    //!st Matrix
    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < acol; j++)
        {
            cin>>a[i][j];
        }
    }



    //2nd Matrix
    for (int i = 0; i < brow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            cin>>b[i][j];
        }
    }

    // Answer Matrix
    int ans[acol][brow];
    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            ans[i][j]=0;
        }
    }
    
    // Multiply Code/Algo

    int sum =0;

    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            for (int k = 0; k < acol; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            ans[i][j] = sum;
            sum = 0;
            
        }
        
    }


    //OUTPUT ANSWER MATRIX

    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}