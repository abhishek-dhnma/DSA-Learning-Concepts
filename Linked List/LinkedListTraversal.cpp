#include<iostream>
using namespace std;


class Nodes {
    
    public:
    int data;
    Nodes* nxtlink;

};

// Traversal Function 

void Display(Nodes* head){

    while (head != NULL)
    {
        cout<<head -> data << " ";
        head = head->nxtlink; 
    }

}

int main(){

    Nodes* head = NULL;
    Nodes* second = NULL;
    Nodes* third = NULL;
    Nodes* forth = NULL;


    head = new Nodes();
    second =  new Nodes();
    third = new Nodes();
    forth = new Nodes();

    //Connect

    head -> data = 2;
    head -> nxtlink = second;

    second ->data =3;
    second -> nxtlink = third;

    third -> data = 4;
    third -> nxtlink = forth;

    forth ->data =5;
    forth -> nxtlink = NULL;

    Display(head);


    return 0;
    }