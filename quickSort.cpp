#include<iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[high];
    a[high] = a[i+1];
    a[i+1] = temp;
    return i+1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivot = partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
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
 quickSort(a,0,n-1);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
