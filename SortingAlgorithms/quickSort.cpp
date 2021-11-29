/* Quick Sort Implementation In C++ */

// quick sort is a divide and conquer algorithm.
// Not a stable sorting algorithm
// inplace sorting algorithm


#include<iostream>
using namespace std;

// Function to swap two elements
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high)
{
    // pivot (Element to be placed at right position)
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}


// Function to do Quick sort
void quickSort(int arr[], int low, int high)
{
    // If there are elements to be sorted
    if (low < high)
    {
        // pi is partitioning index
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(A,0,n);

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

}

// Time Complexity ( Average Case, Best Case ): O(n log n)
// Time Complexity ( Worst Case ): O(n^2)
// Space Complexity: O(1)
