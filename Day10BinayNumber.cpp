#include <iostream>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);

int n;
cin>>n;

unsigned long arr[32];
int i=0;

while (n>0)
{
    arr[i] = n % 2;
    n = n/2;
    i++;
}

for (int j = i-1; j >=0; j--)
{
   cout<<arr[j];     
}




    return 0;
}