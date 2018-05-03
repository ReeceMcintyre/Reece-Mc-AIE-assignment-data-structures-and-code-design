#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>


int main()
{

    system("pause");
}

void listImplementation()
{
    std::list<int> myList;

    myList.push_back(15); // push_back adds an element to the end of the list
    myList.push_back(20);
    myList.push_back(25);
    myList.push_back(30);

    std::cout << "Linked list implementation: \n\n";

    // print the first and last numbers in the list
    std::cout << "The first number in the list is " << myList.front();
    std::cout << " and the last number is " << myList.back() << "\n\n";
}

void stackImplementation() 
{
    std::stack<int> myStack;

    myStack.push(5); // add elements to the top of the stack
    myStack.push(10);
    myStack.push(15);

    std::cout << "Stack implementation: \n\n";

    if (!myStack.empty()) // check if the stack is empty or not
    {
        std::cout << "The number at the top of the stack is " << myStack.top() << "\n\n";

        myStack.pop(); // removed the number at the top of the stack

        std::cout << "The number next in the stack is " << myStack.top() << "\n\n";
    }
}

void queueImplementation()
{
    std::queue<int> myQueue;

    int firstInLine = 1;
    int secondInLine = 2;
    int thirdInLine = 3;

    // assign variables to the queue
    myQueue.push(firstInLine);
    myQueue.push(secondInLine);
    myQueue.push(thirdInLine);

    std::cout << "First in queue is " << myQueue.front() << "\n\n";

    myQueue.pop(); // removes the first in the queue

    std::cout << "Once the first leaves the first in queue is now " << myQueue.front() << "\n\n";
}

// TODO: add the sort and search functions somewhere