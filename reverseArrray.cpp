#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    int n;
    cin>>n;
    int arry[n];
    for(int i = 0; i<n; i++){ 
        cin>>arry[i];
        }
    
    for(int j = 0; j<n; j++){ 
        cout<<arry[j]<<" ";
        }


    for(int j = n-1; j >=0; --j)
     { cout<<arry[j]<<" ";}
    
    
    return 0;
}
