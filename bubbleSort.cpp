#include<iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for(int j = 0; j < n - i - 1; j++)
        {
            if( a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
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
 bubbleSort(a,n);
 cout << "AFTER SORTING" << endl;
 for(int i = 0; i < n; i++)
  cout << a[i] << endl;
}
