#include<iostream>
using namespace std;

void heapify(int arr[], int i, int n)
{
  int largest = i;
  int left = 2*i+1;
  int right = 2*i+2;
  if(left<n && arr[left]>arr[largest])
    largest = left;
  if(right<n && arr[right]>arr[largest])
    largest = right;
  if(largest != i)
  {
    //swap (arr[i],arr[largest])
    int temp = arr[i];
    arr[i]=arr[largest];
    arr[largest]=temp;

    heapify(arr,largest,n);
  }
}

void HeapSort(int arr[], int n)
{
  int i,temp;
  for( i= (n/2) -1;i>=0;i--)
  {
    heapify(arr,i,n);
  }
  // maxheap created

  //heapsort begins
  for( i=n-1;i>=0;i--)
  {
    //swap (arr[0],arr[n-1])
    temp = arr[0];
    arr[0]=arr[i];
    arr[i]=temp;

    heapify(arr,0,i);
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
  HeapSort(arr , 10);
  printarr(arr,10);

}
