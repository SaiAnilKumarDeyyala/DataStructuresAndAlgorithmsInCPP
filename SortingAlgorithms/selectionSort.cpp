/* Selection Sort Implementation In C++ */

// Selection Sort is an Inplace Sorting Algorithm
// Selection Sort is a Stable Sorting Algorithm

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, minInd, temp;
    // One by one move boundary of unsorted subarray
    for(i=0;i<n-1;i++){
        minInd = i;
        // Find the minimum element in unsorted array
        for(j=i+1;j<n;j++) {
            // If current element is smaller than the previous minimum
            if(arr[j] < arr[minInd]) {
                // Update index of minimum element
                minInd = j;
            }
        }
        // Swap the minimum element with the element at the current index
        temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
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

    selectionSort(A, n);

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

}

// Time Complexity (Worst Case, Average Case, Best Case ): O(n^2)
// Space Complexity: O(1)
