#include<iostream>
using namespace std;

void result(int N){
    for (int num = 0; num < 1000; num++)
    {
        if(num%2==0 && num&3==0 && num%5==0)
        {
            cout<<num<<" ";
        }
        
    }
}    
int main(){

    int N;
    cin>>N;

    result(N);

return 0;

}