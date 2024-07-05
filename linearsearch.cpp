#include<iostream>
using namespace std;

int linearsearch(int A[],int num, int n)
{ 
for(int i=0;i<n-1;i++)
{
  if(A[i]==num)
  {
  return i+1;
  }
} 
return -1; 

}

int main()
{
    int A[]={70,35,75,92,20,34,54,68,86,19};
    int num,result;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"enter the number do you want to search in the list";
    cin>>num;
    result=linearsearch(A,num,n);
    if(result!=-1)
    cout<<"found the number at "<<result;
    else 
    cout<<"element not found ";
    return 0;

}