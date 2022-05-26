#include<iostream>
using namespace std;

void heapify(int a[], int i, int n)
{
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    int largest = i;
    if(leftChild < n && a[leftChild] > a[largest])
        largest = leftChild;
    if(rightChild < n && a[rightChild] > a[largest])
        largest = rightChild;
    if(largest != i)
    {
        int temp = a[largest];
        a[largest] = a[i];
        a[i] = temp;
        heapify(a,largest,n);
    }
}

void heapSort(int a[],int n)
{
    for(int i = n/2 - 1; i >= 0 ; i--)
        heapify(a,i,n);
    for(int heapSize = n - 1; heapSize > 0; heapSize--)
    {
        int temp = a[0];
        a[0] = a[heapSize];
        a[heapSize] = temp;
        heapify(a,0,heapSize);
    }
}

int main()
{
 int a[] = {6,3,5,2,7,1,9,4,8};
 int n = sizeof(a)/sizeof(a[0]);
 cout << "BEFORE SORTING" << endl;
 for(int i = 0; i < n; i++)
 {
     cout << a[i] << endl;
 }
 heapSort(a,n);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
