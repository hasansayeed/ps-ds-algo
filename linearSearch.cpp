#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int a[] = {8,4,3,6,5,2,9};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 6;
    int index = linearSearch(a,n,key);
    if(index < 0)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index : " << index << endl;
}
