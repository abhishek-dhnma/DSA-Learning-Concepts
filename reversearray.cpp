#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }


    cout<<"Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arry[i]<<endl;
    }
    

    int strt = 0, end = n-1;

    for(int strt = 0; strt < end ; strt++ ){

        int swap = arry[strt];  // 
        arry[strt] = arry[end];
        arry[end] = swap;
        end--;


    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arry[i]<<" ";
    }
    




    return 0;
}