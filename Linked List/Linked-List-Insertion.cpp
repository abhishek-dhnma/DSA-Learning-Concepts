#include<iostream>
using namespace std;


class Nodes{
    public:
    int data;
    Nodes* nxtlink;
};


void Add_beg(Nodes* head, int d){

    Nodes* ptr = new Nodes();
    ptr -> data = d;
    ptr -> nxtlink = NULL;

    ptr -> nxtlink = head;
    head = ptr;

    return head;
}

int main(){

    
    Nodes* Head = NULL;
    Nodes* Second = NULL;

    Head = new Nodes();
    Second = new Nodes();


    Head -> data = 1;
    Head -> nxtlink = NULL;

    Second -> data = 2;
    Second -> nxtlink  = NULL;

    Head -> nxtlink =  Second;



  int data = 5;
  Head = Add_beg(Head, data);
  Second = Head;

  while (Second != NULL)
  {
    cout<< Second -> data <<" ";
    Second = Second -> nxtlink;
  }
  




return 0;

}