#include<iostream>
using namespace std;


bool Check(int x, int y, int z){

    int b,c;
    int a= max(x, max(y,z));

    if (a==x)   
    {
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if (a*a ==b*b + c*c)
    {
    return true;    
    }
    else{
        return false;
    }
    


}

int main(){


    int x,y,z;
    cin>>x>>y>>z;

    if(Check(x,y,z)){
        cout<<"pythagorean triangle";
    }
    else{
        cout<<"not a pythagorean triangle";
    }



    return 0;
}
