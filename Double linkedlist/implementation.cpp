#include<iostream>
using namespace std;

class Node{

    public:
        Node* prev;
        int data;
        Node* next;
};


Node *first=NULL; //Global First Variable

void Create(int A[], int n){

    Node *temp, *last;
    first =new Node();
    first->prev=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for (int i = 1; i < n; i++)
    {   
        temp=new Node();
        
        temp->data=A[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}


int Length(Node *head){

    int len=0;
    while (head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
    
}

int Display(Node *p){

    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}

int main()
{

    int A[]={1,2,3,25,5,6,7,45,67};
     Create(A,9);

     cout<<"length is: "<<Length(first)<<endl;
     Display(first);


    
    return 0;
}