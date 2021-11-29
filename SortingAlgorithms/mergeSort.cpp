/* Merge Sort Implementation In C++ */

// Merge Sort Algorithm is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
// Stable Sorting Algorithm
// Not An Inplace Sorting Algorithm


#include<iostream>
using namespace std;

// Merges two subarrays of arr[].
void merge(int A[],int L[],int R[],int nL,int nR) {
    // Initial indexes 
    int i=0,j=0,k=0;

    // Until all the elements of two subarrays are merged, merge the two subarrays by comparing the first elements of both subarrays.
    while(i<nL && j<nR) {
        if(L[i]<R[j]) {
            A[k++]=L[i++];
        }
        else {
            A[k++]=R[j++];
        }
    }

    // copy the remaining elements of second subarray into merged subarray
    while(i<nL) {
        A[k++]=L[i++];
    }
    while(j<nR) {
        A[k++]=R[j++];
    }
}

// mergeSort function to sort the input array
void mergeSort(int A[],int n) {

    // If the input array contains only one element, then it is already sorted.
    if(n<2) {
        return;
    }

    int mid,i;
    mid = n/2;
    int L[mid],R[n-mid];
    for(i=0;i<mid;i++) {
        L[i]=A[i];
    }
    for(i=mid;i<n;i++) {
        R[i-mid]=A[i];
    }

    mergeSort(L,mid);
    mergeSort(R,n-mid);
    merge(A,L,R,mid,n-mid);
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

    mergeSort(A, n);

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

}

// Time Complexity (Worst Case, Average Case, Best Case ) : O(nlog(n))
// Space Complexity: O(n)
