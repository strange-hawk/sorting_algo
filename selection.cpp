#include<iostream>
using namespace std;
int main()
{
  int array[n];
  int key;
  for(int i=0;i<n;i++)
  {
    int min = i;
    for(int j=i+1;j<n;j++)
    {
      if(array[min]>array[j])
      {
        min  = j;
      }
    }
      key = array[i];
      array[i]=array[min];
      array[min]=key;
  }
  for(int i=0;i<n;i++) { cout<<array[i]<<" ";}
  cout<<"\n";
}
