#include<iostream>
#include<climits>
using namespace std;

class Nodes {
    public:
    int data;
    Nodes* next; 
};

Nodes* first = NULL;


void Create(int A[], int n){
    
    int i;
    Nodes *temp , *Last;
    first = new Nodes();
    first -> data = A[0];
    first -> next = NULL;
    Last = first;

    for(i=1;i<n;i++){

        temp = new Nodes();
        temp -> data = A[i];
        temp -> next = NULL;
        Last -> next = temp;
        Last = temp;
    }
}

int Max(Nodes* p){
    int x=0;
    if (p==0)
    {
        return INT32_MIN;
    }
    else{
        x = Max(p->next);
        if (x>p->data)
        {
            return x;
        }
        else{
           return p->data;
        }
        
    }
    
}


int main(){

int A[]={2,4,5,37,9,25};
int n=6;

Create(A,n);

cout<<Max(first);

return 0;
}