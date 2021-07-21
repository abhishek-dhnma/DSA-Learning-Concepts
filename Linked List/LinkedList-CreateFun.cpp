#include<iostream>
using namespace std;


class Nodes {
    public:
    int data;
    Nodes* next;
};


Nodes* first = NULL;


void Create(int A[], int n){

    int i;
    Nodes *t, *last;
    first = new Nodes();
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for ( i = 1; i < n; i++)
    {
        t = new Nodes;
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;

    }
}


void Display(Nodes* p){

    while (p != NULL)
    {
        cout<<p -> data << " ";
        p = p->next; 
    }

}

int main(){

int A[] = {1,3,5,7,9,11,13,15,17};
int n = 7;

Create(A,n);
Display(first);




    return 0;
}