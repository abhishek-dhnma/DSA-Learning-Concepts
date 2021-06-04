#include<iostream>
using namespace std;


int LinerSearch(int arr[], int key,int n){


    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
}
    return -1;
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key";
    int key;
    cin>>key;
    
    cout<<LinerSearch(arr,key,n);

        return 0;        
    }
    