#include <iostream>
#include <algorithm>
#include <list>
#include <stack>


int main()
{
    

    system("pause");
}

void listImplementation()
{
    std::list<int> simpleList;

    simpleList.push_back(15); // push_back adds an element to the end of the list
    simpleList.push_back(20);
    simpleList.push_back(25);
    simpleList.push_back(30);

    std::cout << "Linked list implementation: \n\n";

    // print the first and last numbers in the list
    std::cout << "The first number in the list is " << simpleList.front();
    std::cout << " and the last number is " << simpleList.back() << "\n\n";
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