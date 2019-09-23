#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int front =0;
int rear=0;
void insert(int q[])
{
         int x;
         cout<<"Enter the value to push"<<endl;
         cin>>x;
         if(MAX==rear)
         {
           cout<<"Queue is full";
         return;
         }
         else
         {
           q[rear]=x;
           rear++;
         }
}
void deletes(int q[])
{
  if(front==rear)
  {
    cout<<"Queue is empty"<<endl;
  return;
  }
  else
  {
    for(int i=front;i<rear-1;i++)
  {
    q[i]=q[i+1];
  }
  rear--;
  }
}
void display(int q[])
{
  if(front == rear)
  {
    cout<<"Queue is empty"<<endl;
  return;
  }
  else
  {
    for(int i=front ;i<rear;i++)
    {cout<<q[i]<<" ";
    }
    cout<<endl;
  }
}
int main() {
   int q[MAX],a,x;
   do{
     cout<<"------Queue------"<<endl;
     cout<<"1. inserts"<<endl;
     cout<<"2. deletes"<<endl;
     cout<<"3. display"<<endl;
     cout<<"4. Exit"<<endl;
     cout<<"-----------------"<<endl;
     cout<<"Enter your option"<<endl;
     cin>>a;
     switch(a)
     {
       case 1:
       {
         insert(q);
         break;
       }
       case 2:
       {
         deletes(q);
         break;
       }
       case 3:
       {
         display(q);
         break;
       }
       case 4:
       {
         cout<<"Thank You";
         return 0;
         break;
       }
       default:
       cout<<"Invalid option"<<endl;
     }
   }while(a);
}
