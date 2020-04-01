#include<bits/stdc++.h>
using namespace std;
int top=-1;
void push(int stack[],int x,int n)
{
    if(top==n-1)
        cout<<"Stack is Overflow"<<endl;

    else
    {
        top++; //if stack is not full then increase the top by 1 !!!
        stack[top]=x; //push x in stack!!!!

    }

}


bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void pop()
{
    if(isEmpty())
        cout<<"Stack is Underflow"<<endl;
    else
        top--;
}

int size()
{
    return top+1;
}

int topElement(int stack[])
{
    return stack[top];
}

int main()
{
    int n;
    cin>>n;
    int stack[n];
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        push(stack,t,n); //push t in the stack
        cout<<"current size of stack is "<<size()<<endl;
        cout<<stack[i]<<endl;


    }

 pop();
        cout<<"current size of stack is "<<size()<<endl;



   // push(stack,6,n); //push 6 in the stack
    //cout<<"current size of stack is "<<size()<<endl;

    //push(stack,12,n); ////push 12 in the stack
    //push(stack,24,n); ////push 24 in the stack
       // for(int i=0;i<n;i++)
         //   cout<<stack[i]<<endl; //print the value of stack



     //cout<<"current size of stack is "<<size()<<endl;
     //push(stack,9,3); //push 9 in the stack
     //pop();
     //for(int i=0;i<3;i++)
       // pop();
         //cout<<"current size of stack is "<<size()<<endl;

    // pop();



}
