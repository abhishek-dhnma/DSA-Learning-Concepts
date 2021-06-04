#include <bits/stdc++.h>

using namespace std;



int main(){ 
    freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    
    


    double meal_cost;
    int tip_percent;
    int tax_percent;
    
    cin>>meal_cost>>tip_percent>>tax_percent;
    
    double tip = meal_cost/100 * tip_percent ;
    cout<<round(tip)<<endl;


    double tax = meal_cost/100 * tax_percent;
    cout<<round(tax)<<endl;    
    
    float total_cost = meal_cost + tip + tax;
    cout<<round(total_cost);
    return 0;

}
