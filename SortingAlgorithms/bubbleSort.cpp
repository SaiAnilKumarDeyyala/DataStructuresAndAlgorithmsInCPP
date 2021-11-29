/* Bubble Sort Implementation In C++ */

// Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in wrong order.
// Bubble Sort is a comparison sorting algorithm
// Bubble Sort is a stable sorting algorithm
// Bubble Sort is an in-place algorithm

#include<iostream>
using namespace std;

void bubbleSort(int A[],int n) {
    int i,j,temp;
    // Traverse through all array elements
    for(i=0;i<n-1;i++) {
        // Last i elements are already in place
        // Traverse through all elements before i
        for(j=0;j<n-1-i;j++) {
            // If element found is greater than next element Swap them
            if(A[j]>A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() {
    int n,i;

    cout<<"Enter the Number Of Elements: ";
    cin>>n;

    int A[n];
    cout<<"Enter the Elements: ";
    for(i=0;i<n;i++) {
        cin>>A[i];
    }

    bubbleSort(A, n);

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

}

// Time Complexity (Worst Case, Average Case ) : O(n^2)
// Time Complexity (Best Case) : O(n)
// Space Complexity: O(1)
