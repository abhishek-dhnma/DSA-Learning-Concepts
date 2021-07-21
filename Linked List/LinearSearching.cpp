#include<iostream>
using namespace std;


// LL Node

class Node{
     public:

     int data;
     Node* next;
};

Node *first=NULL;

// LL Create Function

void Create(int A[], int n){

    int i;
    Node *temp, *last;
    first = new Node();
    first -> data = A[0];
    first ->next = NULL;
    last = first;

    for ( i = 1; i < n; i++)
    {
        temp = new Node();
        temp ->data = A[i];
        temp ->next = NULL;
        last ->next = temp;
        last = temp;

    }
    
}


// Printout LL

int Display(Node *p){

    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}


// LINEAR SEARCH Using Recursion

Node* Rsearch(Node *p, int key){

    if(p==NULL)
        return NULL;

    if(key==p->data)
        return p;
    
    return Rsearch(p->next,key);
    
}


Node* Lsearch(Node *p, int key){



        Node *q=NULL;
        while (p!=NULL) 
        {
            if (key == p->data)
            {
                q->next = p->next;
                p->next=first;
                first=p;
                return p;
            }
            q=p;
            p =p->next;
            
        }
        return NULL;
        
    }






int main(){

    Node *temmp; //for storing node return from function search
    int A[] = {1,2,3,4,5,6};
    int n = 6;
    
    Create(A,n);
   // Display(first);


    temmp = Rsearch(first,6);
    
    if (temmp)
    {
        cout<<"Found"<<endl;
    }
    else
    cout<<"Not Found"<<endl;



     temmp = Lsearch(first,5);
     temmp = Lsearch(first,6);

    if (temmp)
    {
        cout<<"Found"<<endl;
    }
    else
    cout<<"Not Found"<<endl;
    
    Display(first);

    return 0;
}