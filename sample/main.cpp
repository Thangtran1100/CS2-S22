#include <iostream>
#include <string>
typedef std::string ItemType;
struct Node
{
    ItemType value;
    Node *next;
};
class LinkedList
{
private:
    Node *head;

public:
    // default constructor
    LinkedList() : head(nullptr) {}
    // copy constructor
    LinkedList(const LinkedList &rhs);
    // Destroys all the dynamically allocated memory // in the list.
    ~LinkedList();
    // assignment operator
    const LinkedList &operator=(const LinkedList &rhs);
    // Inserts val at the Front of the list
    void insertToFront(const ItemType &val);
    // Prints the LinkedList
    void printList() const;
    // Sets item to the value at position i in this
    // LinkedList and return true, returns false if
    // there is no element i
    bool get(int i, ItemType &item) const;
    // Reverses the LinkedList
    void reverseList();
    // Prints the LinkedList in reverse order
    void printReverse() const;
    // Appends the values of other onto the end of this // LinkedList.
    void append(const LinkedList &other);
    // Exchange the contents of this LinkedList with the other // one.
    void swap(LinkedList &other);
    // Returns the number of items in the Linked List.
    int size() const;
};

int main()
{
    LinkedList ls;
    ls.insertToFront("George");
    ls.insertToFront("Louise");
    ls.insertToFront("Lionel");
    ls.insertToFront("Helen");

    ls.printList();
    ls.printReverse();
}
// copy constructor to copy the contents of rhs into this
LinkedList::LinkedList(const LinkedList &rhs)
{
    // make head null
    head = nullptr;
    // let node point to head of rhs
    Node *node = rhs.head;
    // loop that continues till the end of rhs, inserting the elements into the end of this list
    while (node != nullptr)
    {
        insertToFront(node->value);
        node = node->next;
    }
}
// destructor to delete the elements of list
LinkedList::~LinkedList()
{
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
}
// assignment operator to copy the contents of rhs into this
const LinkedList &LinkedList::operator=(const LinkedList &rhs)
{
    // avoid self-copy
    if (this != &rhs)
    {
        // delete the contents of current list
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete (temp);
        }
        // make curr point to head of rhs
        Node *curr = rhs.head;
        // loop till the end of rhs copying the elements at the end of this list
        while (curr != nullptr)
        {
            insertToFront(curr->value);
            curr = curr->next;
        }
    }
    return *this;
}
// function to insert the element at the end of the list
void LinkedList::insertToFront(const ItemType &val)
{
    Node *node = new Node;
    node->value = val;
    node->next = nullptr;
    // empty list
    if (head == nullptr)
        head = node;
    else
    {
        Node *curr = head;
        // loop till the last node of the list
        while (curr->next != nullptr)
            curr = curr->next;
        curr->next = node; // add node as the new last node
    }
}
// function to print the list
void LinkedList::printList() const
{
    if (head == nullptr) // empty list
        std::cout << "Empty list" << std::endl;
    else
    {
        Node *curr = head;
        // loop over the end of the list, print the elements of the list
        while (curr != nullptr)
        {
            std::cout << curr->value << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
    }
}
// function to return the ith position element in item
bool LinkedList::get(int i, ItemType &item) const
{
    // if valid position
    if (i >= 0 && i < size())
    {
        int idx = 0;
        Node *curr = head;
        // loop over the list to get the ith node
        while (idx < i)
        {
            curr = curr->next;
            idx++;
        }
        item = curr->value;
        return true;
    }
    return false; // invalid position
}
// function to reverse the list
void LinkedList::reverseList()
{
    // empty or one element list, return
    if (head != nullptr && head->next != nullptr)
    {
        Node *prev = nullptr; // set prev node to null
        Node *curr = head;    // set curr to head
        Node *next;
        // loop till the end of list
        while (curr != nullptr)
        {
            next = curr->next; // set next to node next to curr
            curr->next = prev; // update next of curr to point to prev
            prev = curr;       // make prev point to curr
            curr = next;       // make next curr point to node that was next to curr initially
        }
        head = prev; // update the new head
    }
}
// function to print the list in reverse
void LinkedList::printReverse() const
{
    LinkedList revList(*this); // make revList to contain same elements as this list
    revList.reverseList();     // reverse the revList
    revList.printList();       // print the revList
}
// function to append the elements of other at the end of this list
void LinkedList::append(const LinkedList &other)
{
    Node *curr = other.head;
    // loop till the end of other inserting the elements at the end of this list
    while (curr != nullptr)
    {
        insertToFront(curr->value);
        curr = curr->next;
    }
}
// function to swap this list and other list contents
void LinkedList::swap(LinkedList &other)
{
    LinkedList tempList(*this); // create tempList to contain elements of this list
    *this = other;              // set this list contents to other
    other = tempList;           // set other contents of tempList
}
// function to return the size of the list
int LinkedList::size() const
{
    int count = 0;
    Node *curr = head;
    // loop till the end of list counting the elements of the list
    while (curr != nullptr)
    {
        count++;
        curr = curr->next;
    }
    return count;
}