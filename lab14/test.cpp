#include <iostream>
#include <vector>

using namespace std;

class Max_Heap
{
private:
    int size{};

    // Create a list with index 0 contain value of -1
    vector<int> list = {-1};

    // k th element
    int parent(int index)
    {
        return index / 2;
    }

    int left_child(int index)
    {
        return index * 2;
    }

    int right_child(int index)
    {
        return index * 2 + 1;
    }

public:
    // Check if the list is empty or not
    bool isEmpty() const
    {
        return size == 0;
    }

    // Get the maximum value of the list at index 1
    int getMax() const
    {
        return list[1];
    }

    // Function to insert value to the list
    void insert(int value)
    {
        if (size + 1 >= list.size())
        {
            list.push_back(0);
        }

        list[++size] = value;

        shiftUp(size);

        return;
    }

    // This function swap value up the tree
    void shiftUp(int index)
    {
        if (index > size || index == 1)
        {
            return;
        }

        if (list[index] > list[parent(index)])
        {
            swap(list[parent(index)], list[index]);
        }

        shiftUp(parent(index));
    }

    ////This function swap value down the tree
    void shiftDown(int index)
    {
        if (index > size)
        {
            return;
        }

        int swapKey = index;

        if (left_child(index) <= size && list[index] < list[left_child(index)])
        {
            swapKey = index;
        }

        if (right_child(index) <= size && list[swapKey] < list[right_child(index)])
        {
            swapKey = right_child(index);
        }

        if (swapKey != index)
        {
            swap(list[index], list[swapKey]);
            shiftDown(swapKey);
        }
    }

    // Pop the maximum value out of the list
    int extractMax()
    {
        int max = list[1];

        swap(list[1], list[size--]);
        shiftDown(1);

        return max;
    }

    // Heapify function
    void heapify(Max_Heap *Queue)
    {
        if (!Queue->isEmpty())
        {
            cout << "Heap is correct" << endl;
        }
        else
        {
            cout << "We have problem" << endl;
        }
    }
};

int main()
{
    Max_Heap *Queue = new Max_Heap();

    Queue->insert(10);
    Queue->insert(50);
    Queue->insert(62);
    Queue->insert(45);
    Queue->insert(29);
    Queue->insert(32);
    Queue->insert(20);
    Queue->insert(42);
    Queue->insert(44);

    cout << Queue->getMax() << endl;
    Queue->extractMax();
    cout << Queue->getMax() << endl;

    Queue->heapify(Queue);
}