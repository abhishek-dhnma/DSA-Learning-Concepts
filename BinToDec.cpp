#include<iostream>
using namespace std;

int main(){

    int Binary,Rem,Decimal,Weight;
    cin>>Binary;
    Weight=1, Decimal=0;

    while (Binary != 0)
    {
        Rem = Binary%10;
        Decimal = Decimal + Rem*Weight;
        Binary=Binary/10;
        Weight=Weight*2;
        
    }




    return 0;

}