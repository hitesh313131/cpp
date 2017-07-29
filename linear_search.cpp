// A simple approach is to do linear search

// Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
// If x matches with an element, return the index.
// If x doesn’t match with any of elements, return -1.


// Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1
#include<iostream>
using namespace std;
int linear_search( int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
int main(){
    int arr[10]={2,5,3,6,98,4,9,78,8,7};
    int x=4;
   int a=linear_search(arr[10],10,x);
    cout<<a<<endl;
    return 0;
}
// The time complexity of linear search is O(n).