#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Stack{
private:
    Node *Top;
public:
    Stack(){Top=NULL;}

    void Push(int x);
    int Pop();
    void Display();
    int Isfull();
    //int IsEmpty();
};

int Stack::Isfull(){
    Node *t =  new Node();
   int r = t?1:0;
   delete t;
   return r;
}

void Stack::Push(int x){
    Node *t =new Node();
    if(t==NULL){
        cout<<"Stack is full";
    }
    else{
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

int Stack::Pop(){

    int x=-1;
   if (Top==NULL)
   {
       cout<<"Stack is Empty";
   }
   else{
       x=Top->data;
       Node *t=Top;
       Top=Top->next;
    delete t;
   }
   return x;
}

void Stack::Display(){

    Node *p=Top;
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    cout<<endl;   
}



int main()
{
    Stack stk;
    stk.Push(10);
    stk.Push(12);
    stk.Push(30);
    stk.Display();
   cout<< stk.Pop();
    stk.Display();   
    stk.Push(67);
    stk.Display(); 
    return 0;
}