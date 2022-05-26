#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int x,j;
    for(int i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
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
 insertionSort(a,n);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
