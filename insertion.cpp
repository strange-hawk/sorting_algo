#include<iostream>
#include<ctime>
using namespace std;
int main()
{
  int array[n];
  //driver loop to insert values
  //for(int i=0;i<n;i++) { array[i]=rand();}
  for(int i=1;i<n;i++)
  {
    int key = array[i];
    int j=i-1;
    while(array[j]>key && j>=0)
    {
      array[j+1]=array[j];
      j--;
    }
    array[j+1]=key;
  }
  for(int i=0;i<n;i++) {cout<<array[i]<<"  ";}
}
