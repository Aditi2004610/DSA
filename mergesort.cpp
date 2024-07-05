#include<iostream>
using namespace std;
int merge(int A[],int L,int M,int N,int R)
{
int i,j,k;
int P=M-L+1;
int Q=R-M;
int LA[P],RA[Q];
for(int i=0;i<P;i++)
{
    LA[i]=A[L+i];
}
for(int j=0;j<Q;j++)
{
    RA[j]=A[N+j];
}
 i=0;j=0;k=L;
while(i<P&&j<Q)
{
    if(LA[i]<=RA[j])
    {
        A[k]=LA[i];
        i++;
    }
    else
    {
        A[k]=RA[j];
        j++;
    }
    k++;   
}
while(i<P)
{
    A[k]=LA[i];
    i++;
    k++;
}
while(j<Q)
{
    A[k]=RA[j];
    j++;
    k++;
}
}
void mergesort(int A[],int L,int R)
{
  if(L<R)
  {
    int M=L+((R-L)/2);
    mergesort(A,L,M);
    mergesort(A,M+1,R);
    merge(A,L,M,M+1,R);
  } 
}
void print(int A[],int n)
{
    for (int i=0;i<n;i++)
    {
    cout<<A[i]<<"   ";
    }  
}
int main()
{
    int n;
    cout<<"\nenter number of element";
    cin>>n;
    int A[n];
    cout<<"\nenter element";
    for(int i=0;i<n;i++)
    {
    cin>>A[i];
    }
    print(A,n);
    mergesort(A,0,n);
    cout<<"\nsorted Array is .............\n";
    print(A,n);
    return 0;
}