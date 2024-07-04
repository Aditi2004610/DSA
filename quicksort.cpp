#include<iostream>
using namespace std;
int swap(int &i,int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
}

int print(int A[],int n)
{
    cout<<"\nArray element are";
    for(int i=0;i<n;i++)
    {
        cout<<"   "<<A[i];
    }
}

int partition(int A[],int p,int q)
{
  int pivot=A[p];
  int i=p;
  int j=q;
  while(i<=j)
  {
    while(A[i]<=pivot&&i<=j)
    {
    i++;
    }
     while(A[i]>pivot&&i<=j)
    {
    j--;
    }
    if(i<j)
    {
    swap(A[i],A[j]);
    }
  }
    swap(A[p],A[j]);
    return j;
}
 int quicksort(int A[],int p,int q)
{
    if(p<q)
    {
    int L=partition(A,p,q);
    quicksort(A,p,L-1);
    quicksort(A,L+1,q);
   }
} 
int main()
{
int n;
cout<<"\nenter number of element";
cin>>n;
int A[n];
cout<<"\nenter Array";
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
print(A,n);
quicksort(A,0,n-1);
print(A,n);
return 0;

}
