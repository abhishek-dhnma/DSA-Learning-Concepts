#include <iostream>
#include <string>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
freopen("Output.txt","w",stdout);

    string a,b;
    cin>>a>>b;

    cout<< a.size() << " " << b.size() << endl;

    cout<< a+b << endl;

// 1st Approach

  /* char temp = a[0];
   a[0]=b[0];
   b[0]=temp;
*/

// 2nd Approach

    swap(a[0],b[0]);


   cout<< a <<" " << b;

//cout<< b2 << strchr(a, a);<< " " << a2 <<b.substr(1);

    

    return 0;
}