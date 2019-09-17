#include <iostream>
using namespace std;
#define MAX 100
bool push(int stack[],int top)
{
    int x;
     cout<<"Enter the number to push"<<endl;
     cin>>x;
      if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        stack[++top] = x;
        return true;
    }
}
bool pop(int stack[],int top)\
{
    if (top<0) {
        cout << "Stack Underflow";
        return false;
    }
    else {
        top--;
        return true;
    }
}
void display(int stack[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int stack[MAX],a,x;
    int top=-1,n=0;
  do
  {
    cout<<"1. push"<<endl;
    cout<<"2. pop"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"Enter any number"<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        {
            push(stack,top);
            if(push)
               {
                    n++;
                    top++;
               }
            break;
        }
        case 2:
        {
            pop(stack,top);
            if(pop)
              {
                    n--;
                    top--;
              }
            break;
        }
        case 3:
            {
                display(stack,n);
                break;
            }
        case 4:
            {
                cout<<"Thank You";
                return 0;

            }
    }
  }while(a);
}
