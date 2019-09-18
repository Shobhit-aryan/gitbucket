#include <iostream>
 using namespace std;
  int main()
   {
     int m,n;
      cin>>n;
      int a[n][n];
      cout<<"Enter elements"<<endl;
      for(int i=0;i<n;i++)
      { for(int j=0;j<n;j++)
      { if(j<=i)
      cin>>a[i][j];
      }
      }
      cout<<"lower triangular matrix"<<endl;
      for(int i=0;i<n;i++)
      { for(int j=0;j<n;j++)
      { if(j<=i)
      cout<<a[i][j]<<"\t";
      } cout<<endl;
      }
      cout<<"transpose of lower triangular matrix"<<endl;

      for(int i=0;i<n;i++)
       { for(int j=0;j<n;j++)
        { if(j<i)
        cout<<" \t";
        else
        cout<<a[j][i]<<"\t";
        } cout<<endl;
         }
         }
