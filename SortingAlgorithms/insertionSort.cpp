/* Insertion Sort Implementation In C++ */

// Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
// Insertion sort works by taking elements from the array one by one and inserting them into the correct position in the array.

// Insertion Sort is an Inplace Sorting Algorithm, Stable Sorting Algorithm, and Linear Sorting Algorithm.

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, value, j;
    // Loop for traversing the array from second element to the end
    for (i = 1; i < n; i++)
    {
        // Store the current element value in value variable
        value = arr[i];
        j = i - 1;
        // Loop for traversing the array from the current element to the beginning
        // and comparing the current element with the previous element
        // and swapping the elements if the previous element is greater than the current element
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
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

    insertionSort(A, n);

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

}

// Time Complexity (Worst Case, Average Case ) : O(n^2)
// Time Complexity (Best Case) : O(n)
// Space Complexity: O(1)
