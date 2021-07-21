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


//  TRAVERSING

int count(Nodes* p){

    int c=0;
    while (p !=0)
    {
        c++;
        p= p-> next;
    }
    
    return c;
}


int sum(Nodes* p){

    int sum=0;
    while (p)
    {
        sum += p->data;
        p =p->next;
    }
    return sum;
}


// RECURSION

int countR(Nodes* p){

   if (p==0)
   {
       return 0;
   }
   else {
       return countR(p->next)+1;
   }
   
}


int sumR(Nodes* p){

if (p==0)
   {
       return 0;
   }
   else {
       return sumR(p->next)+ p->data;
   }
   
}

int main(){

int A[]={2,4,5,6,9,25};
int n=6;

Create(A,n);

cout<<"Lenght of Linnked list: "<<count(first)<<endl;

cout<<"Sum of Linked list: "<<sum(first)<<endl;

cout<<"Lenght of Linnked list using recursion: "<<countR(first)<<endl;

cout<<"Sum of Linked list using recursion: "<<sumR(first)<<endl;

return 0;
}