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


int Display(Node *p){

    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
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


void Insert(Node *first, int position, int data){

    if(position < 0 || position > Length(first)) {
        return;
        }


    if (position==0)
    {
        Node *t = new Node();
        t->data=data;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;

    }else{

        Node *p=first;
        Node *t= new Node();

        t->data=data;
        for (int i = 0; i < position-1; i++)
        {
            p=p->next;
        }

        t->next=p->next;
        t->prev=p;
        if (p->next==NULL)
        {
            p->next->prev=t;
        }
        p->next=t;
    }
}




int main()
{


    int A[]={1,2,3,4,6,7,45,67};
    Create(A,8);
    Display(first);

    int posi=5;
    cout<<endl;
    Insert(first,posi,5);    
    Display(first);

    
    return 0;
}