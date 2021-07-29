#include<iostream>
using namespace std;

class Stack{
 

    int Top;
    int Arr[6];

    public:
    Stack()
    {
        Top=-1;
        for (int i = 0; i < 6; i++)
        {
            Arr[i]=0;
        }  
    }

    // IsEmpty() Fuction

    bool IsEmpty()
    {
        if (Top==-1)
            return true;
        else
            return false;  
    }

    // IsFull() Function

    bool IsFull()
    {
        if (Top==5)
            return true;
        else
            return false;  
    }

    // Push() Function

    void Push(int val)
    {
        if(IsFull())
            cout<<"Stack overflow"<<endl;
        else{
            Top++;
            Arr[Top]=val;
    }}

    // Pop() Function

    int Pop()
    {
        if(IsEmpty())
            cout<<"Stack UnderFlow is Empty";
        else{
            int x = Arr[Top];
            Arr[Top]=0;
            Top--;
            return x;
        }
    }

    // Peek() Function

    int Peek(int pos)
    {   
        
        if (IsEmpty())
        {
            cout<<"Stack UnderFlow";
            return 0;
        }
        else {
            return Arr[pos];
    }}

    // Change() Function

    void Change(int pos, int val){
        Arr[pos]=val;
        cout<<"Value has changed at location "<<pos<<endl;
    }


    // Count() Function

    int Count(){

        return (Top+1);
    }

    // Display() Function

    int Display(){

        cout<<"All stacks elements are there"<<endl;
        for (int i = 5; i >= 0; i--)
        {
            cout<<Arr[i]<<endl;
        }   
    }

};


int main()
{

    Stack st;
    int position,Value,option;
    
    do
    {   cout<<"What operation do you want to perform? Select Option number. Enter 0 to exit.";
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. Peek()"<<endl;
        cout<<"4. Count()"<<endl;
        cout<<"5. Display()"<<endl;
        cout<<"6. IsEmpty()"<<endl;
        cout<<"7. IsFull()"<<endl;
        cout<<"8. Change()"<<endl;
        cout<<"9. Clear Screen"<<endl;

        cin>>option;

        switch (option)
        {

        case 0:
            break;
        case 1:
            cout<<"Enter val for push: "<<endl;
            cin>>Value;
            st.Push(Value);
            break;

        case 2:
            cout<<"Pop Function "<<st.Pop()<<endl;
            break;

        case 3:
            cout<<"Enter position for peek"<<endl;
            cin>>position;
            st.Peek(position);
            break;

        case 4:
            cout<<"Count the stack";
            st.Count();
            break;

        case 5:
            cout<<"Display the stack";
            st.Display();

        case 6:
            
            if (st.IsEmpty())
            {
                cout<<"Stack is empty";
            }
            else{
                cout<<"Stack is not empty";
            }
            break;

        case 7:
        
            if (st.IsFull())
            {
                cout<<"Stack is full";
            }
            else{
                cout<<"Stack is not full";
            }
            break;

        case 8:
            cout<<"Enter position and value for change"<<endl;
            cout<<"Enter position";
            cin>>position;
            cout<<endl;
            cout<<"Enter value";
            cin>>Value;
            st.Change(position,Value);
            break;
        case 9:
            system("cls");
            break;
        

        
        
        default:
            cout<<"You Choose invalid option"<<endl;
            break;
        }
    } while (option!=0);
    
    
    return 0;
}