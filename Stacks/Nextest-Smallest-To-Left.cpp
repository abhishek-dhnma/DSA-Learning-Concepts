#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NGE(vector<int> &v){

    int n = v.size();
    vector<int> ans(n);

    stack<int> s;

        for (int i = 0; i <n ; i++)
        {
                                     // Greater
                while (!s.empty() && s.top() > v[i])
                {
                    s.pop();
                }
                if(s.empty()) {
                     ans[i]=-1;
                     }
                else{

                ans[i]=s.top();
                 }
            

            s.push(v[i]);
        }
        return ans;
}


int main()
{
    vector<int> v ={5,2,7,6,1,2,8,9,7};

    vector<int> ans = NGE(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}