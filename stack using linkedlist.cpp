#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
struct node* top=NULL;
int n=0;
void push(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=top;
    top=temp;
    n++;
}
void pop()
{
    struct node* temp;
    if(top==NULL)
        return;
        temp=top;
        top=top->next;
        free(temp);
        n--;
}
void display(node* nd)
{
    while(nd!=NULL)
    {
        cout<<nd->data<<" ";
        nd=nd->next;
    }
}
int main()
{
    int a;
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
            int x;
            cout<<"Enter the number to insert"<<endl;
            cin>>x;
            push(x);

            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
            {
                display(top);
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
