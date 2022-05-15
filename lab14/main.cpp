#include<iostream>

using namespace std;

// Restores a given node up in the heap. This is used
// in decreaseKey() and insert()
void shiftUp(int arr[], int index, int k)
{
    int parent = (index - 1) / k;

    while (parent >= 0)
    {
        if (arr[index] > arr[parent])
        {
            swap(arr[index], arr[parent]);

            index = parent;

            parent = (index - 1) / k;
        }
        else
        {
            break;
        }
    }
}

void shiftDown(int arr[], int len, int index, int k)
{
    // child array to store indexes of all
    // the children of given node
    int child[k + 1];

    while (1)
    {
        for (int i = 1; i <= k; i++)
        {
            if(k * index + i < len)
            {
                child[i] = k * index + i;
            }
            else
            {
                child[i] = -1;
            }
        }

        int max_child = -1;
        int max_child_index;

        // loop to find the maximum of all
        // the children of a given node
        for (int i = 1; i <= k; i++)
        {
            if (child[i] != -1 && arr[child[i]] > max_child)
            {
                max_child_index = child[i];

                max_child = arr[child[i]];
            }
        }

        if (max_child == -1)
        {
            break;
        }

        if (arr[index] < arr[max_child_index])
        {
            swap(arr[index], arr[max_child_index]);
        }

        index = max_child_index;
    }
}


void insert(int arr[], int *n, int k, int element)
{
    //Insert the new element in the last position
    arr[*n] = element;

    *n = *n + 1; //Increase heap by 1

    shiftUp(arr, *n - 1, k);
}

// Function to build a heap of arr[0..n-1] and value of k.
void buildHeap(int arr[], int n, int k)
{
    // Heapify all internal nodes starting from last
    // non-leaf node all the way upto the root node
    // and calling restore down on each
    for (int i = (n - 1) / k; i >= 0; i--)
    {
        shiftDown(arr, n, i, k);
    }
}

// Function that returns the key of root node of
// the heap and then restores the heap property
// of the remaining nodes
int extractMax(int arr[], int *n, int k)
{
    int max = arr[0];

    // Copy the last node's key to the root node
    arr[0] = arr[*n - 1];

    *n = *n - 1;

    shiftDown(arr, *n, 0, k);

    return max;
}

int main()
{
    const int capacity = 100;
    int arr[capacity] = {4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    int k = 3;

    buildHeap(arr, n, k);

    cout << "Built Heap: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    int element = 3;

    insert(arr, &n, k, element);

    cout << "\n\nHeap after insertion of: \n" << element << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\nExtracted max is " << extractMax(arr, &n, k);

    cout << "\n\nHeap after extract max: \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}