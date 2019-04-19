#include<iostream>
#include<cmath>
#define INF 999999999;
#define SIZE 10
using namespace std;
void merge (int arr[], int p, int q, int r)
{

  int n1 = q-p+1;
  int n2 = r-q;
  int A[n1+1];
  int B[n2+1];
  for(int i=0;i<n1;i++)  { A[i]=arr[p+i];}
  A[n1]=12345678;
  for(int i=0;i<n2;i++)
    B[i]=arr[q+1+i];
  B[n2]=12345678;
  //int C[n1+n2+1];

  int i,j,k;
  i=j=0;
  for(k=p;k<=r;k++)
  {
    if(A[i]<=B[j])
    {
      arr[k]=A[i];
      i++;
    }
    else
    {
      arr[k]=B[j];
      j++;
    }
  }
}

void MergeSort(int arr[],int p, int r)
{
  if(p<r)
  {
    int q = floor((p+r)/2);
    MergeSort(arr,p,q);
    MergeSort(arr,q+1,r);
    merge(arr,p,q,r);
  }
}

void printArr(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
  int array[10]={12,98,23,87,34,76,56,54,67,43};
  int p=0;
  int r=9;
  MergeSort(array,0,SIZE-1);
  printArr(array,SIZE);
}
