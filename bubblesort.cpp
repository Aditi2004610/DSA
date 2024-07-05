#include<iostream>
using namespace std;
int print(int A[],int n)
{
for(int i=0;i<n;i++)
{
cout<<"  "<<A[i];
}
}
void bubblesort(int A[],int n)
{
for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j+1]<A[j])
            {
            int temp;
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
cout<<"\nsorted Array is ................";
}
int main()
{
int n;
cout<<"enter number of element";
cin>>n;
int A[n];
cout<<"enter array element";
for(int i=0;i<n;i++)
{
cin>>A[i];
}
print(A,n);
bubblesort(A,n);
print(A,n);
return 0;
}