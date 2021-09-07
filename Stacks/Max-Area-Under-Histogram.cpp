#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;


int MaxArea(vector<int>& arr){

    int i = 0;
    int n = arr.size();

    stack<int> s;

    vector<int> NSR(n);
    vector<int> NSL(n);




    // Nearest Smallest to right

    for ( i = n-1; i >= 0; i--)
    {
        while(!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        
        if(s.empty()){
            NSR[i] = n-1;
        }
        else{
            NSR[i] = s.top() -1;
        }

        s.push(i);
    }

    cout<<"Nearest Smaller to Right: ";
    for ( i = 0; i < n; i++)
    {
        cout<<NSR[i]<<" ";
    }
     
//////////////////////////////////////////////


    while (!s.empty())
    {
        s.pop();
    } 
    
/////////////////////////////////////////////
    // Nearest Smaller to Left

    for ( i = 0; i < n; i++)
    {
        while(!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        
        if(s.empty()){
            NSL[i] = 0;
        }
        else{
            NSL[i] = s.top() +1;
        }
        s.push(i);
    }

     cout<<endl;
     cout<<"Nearest Smaller to Left: ";
     for ( i = 0; i < n; i++)
    {
        cout<<NSL[i]<<" ";
    }
      cout<<endl;

    // Find Out Max Area

   vector<int> Height(n);
    vector<int> Area(n);

    int max_area = 0;
    for(i = 0; i<n; i++){

        Height[i] = ((NSR[i] - NSL[i])  + 1);
        Area[i] =  arr[i] * Height[i];
        max_area = max(max_area, Area[i]);

        //max_area = max(max_area, arr[i] * ((NSR[i] - NSL[i])  + 1));
    }
    cout<<"Max Area: ";
    for(auto x : Area){
        cout<<x<<" ";
    }
    cout<<endl;

    return max_area;

}


int main()
{
    vector<int> Arr = {2,1,5,6,2,3};
    int ans = MaxArea(Arr);
    cout<<ans;
    return 0;
}