#include<iostream>
using namespace std;
int partition(int *A,int start,int end)
{
    int pivot=A[end];
    int pindex=start;
    for(int i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pindex]);
            pindex++;
        }
    }
    swap(A[pindex],A[end]);
    return pindex;
}
void quicksort(int *A,int start,int end)
{
    if(start<end)
    {
        int pindex=partition(A,start,end);
        quicksort(A,start,pindex-1);
        quicksort(A,pindex+1,end);

    }
}
int main()
{
    int n;
    cout<<"Enter the number of elments "<<endl;
    cin>>n;
    int a[n];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
