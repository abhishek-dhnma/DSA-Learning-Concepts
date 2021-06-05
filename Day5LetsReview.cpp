#include<iostream>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    //cin.ignore(100,'\n');

    int t;
    cin>>t;
    

    while (t)
    {
        string s;
        cin>>s;

        for (int i = 0; i < s.length(); i++)
    {   if(i%2==0)
    {
        cout<<s[i];}
    }
    cout<<" ";

    for (int i = 0; i < s.length(); i++)
    {
        if(i%2 !=0){
        cout<<s[i];}

    }

    cout<<endl;
    
        t--;
    }


    return 0;
}