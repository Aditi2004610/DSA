#include<iostream>
using namespace std;
int fibosearch(int A[],int n,int x)
{
if(n==0)
{
return -1;
}
int fibo1=0,fibo2=1,fibo3=fibo2+fibo1;
while(fibo3<n)
{
    fibo1=fibo2;
    fibo2=fibo3;
    fibo3=fibo1+fibo2;
}
int offset=0;
while(fibo3>1)
{
int i=min(offset+fibo2,n-1);

if(A[i]<x)
{
 fibo3=fibo2;
 fibo2=fibo1;
 fibo1=fibo3-fibo2;
 offset=i;
}
else if(A[i]>x)
{
 fibo3=fibo1;
 fibo2=fibo2-fibo1;
 fibo1=fibo3-fibo2;

}
else
{
    return i;
}
}
if(fibo2==1&&A[offset+1]==x)
{
return offset+1;
}
else
{
return -1;
}
}

int main()
{
int x;
int A[]={10,12,14,16,19,28,39,46,56,64,72,84,93,120};
int n=sizeof(A)/sizeof (A[0]);
cout<<"\nenter no do you want find";
cin>>x;//number to be find;
int index=fibosearch(A,n,x);
if(index>=0)
{
cout<<"\nnumber found at index"<<index;
}
else
{
    cout<<"not found";
}
    return 0;
}