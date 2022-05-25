#include<iostream>
using namespace std;

int findMinIndex(int *a, int i, int n)
{
    int minIndex = i;
    for(int j = i + 1; j < n; j++)
    {
        if(a[j] < a[minIndex])
            minIndex = j;
    }
    return minIndex;
}

void selectionSort(int *a, int n)
{
  for(int i = 0; i < n - 1; i++)
  {
      int minIndex = findMinIndex(a,i,n);
      int temp = a[i];
      a[i] = a[minIndex];
      a[minIndex] = temp;
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
 selectionSort(a,n);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
#include<iostream>
using namespace std;

int findMinIndex(int *a, int i, int n)
{
    int minIndex = i;
    for(int j = i + 1; j < n; j++)
    {
        if(a[j] < a[minIndex])
            minIndex = j;
    }
    return minIndex;
}

void selectionSort(int *a, int n)
{
  for(int i = 0; i < n - 1; i++)
  {
      int minIndex = findMinIndex(a,i,n);
      int temp = a[i];
      a[i] = a[minIndex];
      a[minIndex] = temp;
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
 selectionSort(a,n);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
