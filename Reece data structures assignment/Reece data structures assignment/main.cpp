#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>


int main()
{   
    std::deque<std::string> dequeOfPeople;

    //todo: for deque make it a string deque and have a person pushing in line scenario

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
    std::cout << "A list consists of 12, 20, 25, 30\n\n";
    std::cout << "The first number in the list is " << myList.front();
    std::cout << " and the last number is " << myList.back() << "\n\n";
    std::cout << "We can see the front and back elements of a queue by using the front() and back() functions\n\n";
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
        std::cout << "With a stack of 3 numbers (5, 10, 15), the number at the top of the stack is " << myStack.top() << "\n\n";

        myStack.pop(); // removed the number at the top of the stack

        std::cout << "The number next in the stack is " << myStack.top() << " We can find the next number in the stack by using pop()\n\n";
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

    std::cout << "Queue implementation: \n\n";

    std::cout << "In a queue consisting of 1, 2, 3 the first in queue is " << myQueue.front() << "\n\n";

    myQueue.pop(); // removes the first in the queue

    std::cout << "Once the first leaves the first in queue is now " << myQueue.front() << "we can remove the top of the queue and go to the next by using pop()\n\n";
}

void priorityQueueImplementation()
{
    std::priority_queue<int> myFirstPriorityQueue;

    myFirstPriorityQueue.push(12);
    myFirstPriorityQueue.push(4);
    myFirstPriorityQueue.push(8);

    std::cout << "Priority queue(heap) implementation: \n\n";

    std::cout << "The order of the queue is 12, 4, 8 \n\n";
    std::cout << "The top of the priority queue is " << myFirstPriorityQueue.top() << "\n\n";

    myFirstPriorityQueue.pop(); // removes the first priority number

    std::cout << "After calling pop() the top of the queue will now be " << myFirstPriorityQueue.top() << " This is because priority queues prioritize the larger number\n\n";
}

// TODO: add the sort and search functions somewhere