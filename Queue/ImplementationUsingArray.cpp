#include<bits/stdc++.h>
using namespace std;

//#define n 4

class Queue {
        int *arr;
        int front;
        int back;
    public:
         Queue(int n){
            arr = new int[n];
            front = -1;
            back = -1;
         }

    void Enqueue(int x, int n){

            if(back == n-1){
                cout<<"Queue is OverFlow"<<endl;
                return;
            }
            back++;
            arr[back] = x;

            if(front==-1){
                front++;
            }
        }
    
    void Dequeue(){
        if(front==-1 || back < front){
            cout<<"Queue is underFlow"<<endl;
            return;
        }
        front++;
    }

    int peek(){

        if(front==-1 || back < front){
            cout<<"Queue is underFlow"<<" ";
            return -1;
            
        }
        return arr[front];       
    }

    bool IsEmpty(){
        if(front==-1 || front > back){
            return true;
        }
        return false;
    }
};

int main()
{   int n =5;
    Queue Q(n);

    Q.Enqueue(15,n);
    Q.Enqueue(67,n);
    Q.Enqueue(12,n);
    Q.Enqueue(14,n);
    Q.Enqueue(67,n);

    cout<<Q.peek()<<endl;
    Q.Dequeue();

    cout<<Q.peek()<<endl;
    Q.Dequeue();

    cout<<Q.peek()<<endl;
    Q.Dequeue();

    cout<<Q.peek()<<endl;
    Q.Dequeue();

    cout<<Q.peek()<<endl;
    Q.Dequeue();

    cout<<Q.peek()<<endl;
    


    
    
    return 0;
}