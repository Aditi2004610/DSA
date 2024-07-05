#include<iostream>
using namespace std;

int binarysearch(int A[],int l,int r,int num)
{
while(l<=r)
{
  int mid=l+((r-l)/2);
  if(A[mid]>num)
   r=mid-1;
  
 if(A[mid]<=num)
   l=mid+1;
  
  if(A[mid]==num)
    return mid+1;// for array indexing
}
  return -1;
}

int main()
{
 int num;   
 int A[]={9,17,25,36,47,59,68,73,85,92,105,345};
 int n=sizeof(A)/sizeof(A[0]);
cout<<"\nenter the number of element do you want search";  
cin>>num;
int result=binarysearch(A,0,n-1,num);
if(result==-1)
cout<<"element not found";
else
cout<<"element found at =  "<<result;
return 0;
}