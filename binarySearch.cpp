#include<iostream>
using namespace std;

int binarySearchIterative(int a[], int low, int high, int key)
{
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(a[mid] == key)
            return mid;
        if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int binarySearchRecursive(int a[], int low, int high, int key)
{
    if(high >= low){
        int mid = low + (high - low)/2;
        if(a[mid] == key)
            return mid;
        if(a[mid] < key)
            return binarySearch(a,mid+1,high,key);
        return binarySearch(a,low,mid-1,key);
    }
    return -1;
}

int main()
{
    //the input array must be sorted
    //if not sorted, then first sort the array
    //then call the binary search functions
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 6;
    int index = binarySearchIterative(a,0,n-1,key);
    if(index < 0)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index : " << index << endl;
}
