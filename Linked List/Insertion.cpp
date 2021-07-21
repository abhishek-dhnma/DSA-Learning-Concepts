#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
};

Node *first = NULL;

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

int count(Node* p){

    int c=0;
    while (p !=0)
    {
        c++;
        p= p-> next;
    }
    
    return c;
}

void Insertion(int pos,int x, Node *p ){
   
   int i =0;
   if (pos < 0 || pos > count(p))
   {
       return;
   }

   Node *t = new Node();
   t->data = x;
   
   if(pos == 0){
       t->next=p;
       first = t;
   }

   else{
       for ( i = 0; i < pos-1; i++)
       {
           p = p->next;
       }
       t->next = p->next;
       p ->next=t;
       

   }


}

int Display(Node *p){

    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}

int main(){

    int A[] = {1,5,6,7,9};
    

    Create(A,6);

    Insertion(4,45,first);

    Display(first);


    return 0;
}
