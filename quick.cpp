#include<iostream>
using namespace std;

int part(int arr[], int p, int r)  //r is the index of last element i.e.r-1   //p=0   //r=9
{
  int temp;
  int x = arr[r]; //taking last element as pivot
  int i=p-1;  //taking i=-1 to be loop invariant
  int j;
  for( j=p ; j<r ; j++)  //loop from p to r-2  since r-1 is pivot
  {
    if(arr[j]<=x)
    {
      i=i+1;
      temp = arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      //swap(arr[i],arr[j]);
    }
  }
  temp = arr[i+1];
  arr[i+1]=arr[r];
  arr[r]=temp;
  //swap(arr[i+1],arr[r]);
  return (i+1);
}


void QuickSort(int arr[], int p, int r)
{
  int q;
  if(p<r)
  {
    q = part(arr,p,r);
    QuickSort(arr,p,q-1);
    QuickSort(arr,q+1,r);
  }
}



void printarr(int arr[], int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
  int arr[10] = {12,98,23,87,34,76,56,54,67,43};
  printarr(arr,10);
  QuickSort(arr,0,9);
  printarr(arr,10);

}
