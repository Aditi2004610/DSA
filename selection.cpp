#include<iostream>
using namespace std;

void print(int A[],int n)
{
for(int i=0;i<n;i++)
{
cout<<A[i]<<"     ";
}
}
int selection(int A[],int n)
{
for(int i=0;i<n-1;i++)
{
 for(int j=i+1;j<n;j++)
  {
    if(A[i]>A[j])
  {
   int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
  }
  }
}    
  cout<<"\nsorted Array is................\n";
}

int main()
{
int n;
cout<<"\nenter number of element";
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
cin>>A[i];
}
print(A,n);
selection(A,n);
print(A,n);
return 0;

}
