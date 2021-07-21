#include<iostream>
using namespace std;

class Nodes {
    public:
    int data;
    Nodes* next; 
};


Nodes*  first = NULL;


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


void Display(Nodes* head){
    
 if(head != NULL){
    cout<<head -> data<<" ";
    Display(head -> next);
 }
}


void DisplayReverse(Nodes* head){
    
 if(head != NULL){
    Display(head -> next);
    cout<<head -> data<<" ";
 }
}

int main(){

int A[]={2,4,5,6,9,25};
int n=6;

Create(A,n);
DisplayReverse(first);
Display(first);


return 0;
}