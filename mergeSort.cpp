#include<iostream>
using namespace std;

void merge(int a[],int low, int mid, int high)
{
    int m = mid - low + 1;
    int n = high - mid;
    int left[m],right[n];
    for(int i = 0; i < m; i++)
    {
        left[i] = a[low+i];
    }
    for(int i = 0; i < n; i++)
    {
        right[i] = a[mid+1+i];
    }
    int i,j,k;
    i = 0;
    j = 0;
    k = low;
    while(i < m && j < n)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < m)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < n)
    {
        a[k] = right[j];
        j++;
        k++;
    }

}

void mergeSort(int a[], int low, int high)
{
    if(low >= high)
        return;
    int mid = low + ((high - low)/2);
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
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
 mergeSort(a,0,n-1);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
