#include <iostream>

using namespace std;



int Arrysum(int ar[], int n){
   
    int sum = 0;
    for(int i =0; i < n;i++){
        sum = sum + ar[i];
    }
    return sum;
}


int main(){
    

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    
    
    int n;
    cin>>n;
    int ar[n];
   
    for(int i =0; i<n;i++){
        cin>>ar[i];
    }
    int hh;
    for (int j = 0; j < n; j++)
    {   
        cout<<ar[j]<<" ";
        Arrysum(ar, n);
    }
    
    
        
    
    
    return 0;
}