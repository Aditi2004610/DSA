#include<iostream>
using namespace std;
int merge(int A[],int L,int M,int N,int R)
{
int i,j,k;
int P=M-L+1;
int Q=R-M;
int LA[P],RA[Q];
for(int i=0;i<P;i++)         // for loops are there for dividing the array int sub arrays
{
    LA[i]=A[L+i];
}
for(int j=0;j<Q;j++)
{
    RA[j]=A[N+j];
}
 i=0;j=0;k=L;
while(i<P&&j<Q)            //while for mergeing the LA[] and RA[] back into A[] in sorted order 
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
while(i<P)            // if(i>mid)  when i=n+1;
{
    A[k]=LA[i];
    i++;
    k++;
}
while(j<Q)          // if(j>R)  when j=n+1;
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
    mergesort(A,0,n-1);
    cout<<"\nsorted Array is .............\n";
    print(A,n);
    return 0;
}