#include<iostream>
using namespace std;
void print(int A[],int n)
{
    cout<<"\nArray element are.................";
    for(int i=0;i<n;i++)
    {
        cout<<"     "<<A[i];
    }
}

int insertion(int A[],int n)
{
   for(int i=1;i<n;i++)
   {
    int key=A[i];
    int j=i-1;
        while(j>=0  &&  A[j]>key)
        {
           A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
 }

int main()
{
    int n;
    cout<<"\nenter number of element ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    print(A,n);
    insertion(A,n);
    print(A,n);
    
    return 0;
    }