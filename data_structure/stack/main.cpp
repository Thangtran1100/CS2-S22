#include "stack.h"

int main()
{
    int A[] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(A)/sizeof(A[0]);

    Stack st(size);

    st.display();

    st.push(4);

    std::cout << st.peek(2) << std::endl;

    return 0;
}