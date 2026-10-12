#include <iostream>
using namespace std;

// Function to heapify a subtree rooted with node i which is an index in arr[].
void heapify(int arr[], int n, int i) {
    int largest = i;      // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Main function to perform heap sort
void heapSort(int arr[], int n) {
    // Build a max heap from the input data
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract elements
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Utility function to print array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main() {
    int arr[] = {1, 14, 3, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array:\n";
    display(arr, n);

    heapSort(arr, n);

    cout << "Sorted array:\n";
    display(arr, n);
    return 0;
}

