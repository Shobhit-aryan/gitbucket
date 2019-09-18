#include<iostream>
using namespace std;
void merges(int A[], int n1, int index1,int B[],int n2,int index2,int C[],int index)
{
    while(n1&&n2)
    {
        if(A[index1]<B[index2])
        {
            C[index]=A[index1];
            index++;
            index1++;
            n1--;
        }
        else{
            C[index]=B[index2];
            index++;
            index2++;
            n2--;
        }
    }
    while(n1)
    {
        C[index]=A[index1];
        index++;
        index1++;
        n1--;
    }
     while(n2)
    {
        C[index]=B[index2];
        index++;
        index2++;
        n2--;
    }

}

void mergepass(int A[],int N,int L,int B[])
{
    int j,lb;
    int q,s,r;
    q=N/(2*L);
    s=2*L*q;
    r=N-s;
    for(j=0;j<q;j++)
    {
        lb=2*j*L;
        merges(A,L,lb,A,L,lb+L,B,lb);
        }
        if(r<=L){
            for(j=0;j<r;j++)
                B[s+j]=A[s+j];
        }
        else
            merges(A,L,s,A,r-L,s+L,B,s);
}
void merge_sort(int A[],int N)
{
    int L=1,B[11];
    while(L<N)
    {
        mergepass(A,N,L,B);
        mergepass(B,N,2*L,A);
    }
}


int main()
{
    int i,a[i]={11,66,88,33,66,77,99,88,22,44,55};
    for(i=0;i<=10;i++)
        cout<<a[i]<<" ";
    merge_sort(a,11);
    cout<<endl;
    for(i=0;i<=10;i++)
        cout<<a[i]<<" ";

}
