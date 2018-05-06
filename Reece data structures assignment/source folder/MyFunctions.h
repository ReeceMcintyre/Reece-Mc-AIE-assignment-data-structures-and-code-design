#pragma once

#include "LinearSearchAlgorithm.h"

int main();

/***************************************************************************************************
creation of a list and displaying of ways to use it 
****************************************************************************************************/
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

/***************************************************************************************************
creating a stack and accessing its contents
****************************************************************************************************/
void stackImplementation()
{
    std::stack<int> myStack;

    // add elements to the top of the stack with push
    myStack.push(5);
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

/***************************************************************************************************
showing how a simple queue works
****************************************************************************************************/
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

    std::cout << "Once the first leaves the first in queue is now " << myQueue.front() << " we can remove the top of the queue and go to the next by using pop()\n\n";
}

/***************************************************************************************************
showing how a priority queue works through manipulating the contents
****************************************************************************************************/
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

/***************************************************************************************************
showing how deque works with a grocery store situation
****************************************************************************************************/
void dequeImplementation()
{
    std::deque<std::string> dequeOfPeople;

    // add people to the end of the deque 
    dequeOfPeople.push_back("John");
    dequeOfPeople.push_back("Sam");
    dequeOfPeople.push_back("Hannah");

    std::cout << "Deque implementation: \n\n";

    std::cout << "3 people are standing in line at a grocery store John, Sam and Hannah\n\n";
    std::cout << "A man named George joins the back of the line\n\n";

    dequeOfPeople.emplace_back("George"); // emplace creates and inserts and element and in this case at a desired side of the deque

    std::cout << "Another man Tom decides to push in front of the line and go in front of John\n\n";

    dequeOfPeople.emplace_front("Tom");

    std::cout << "Now at the front of the line is " << dequeOfPeople.front() << " and at the back is " << dequeOfPeople.back() << "\n\n";
}

/***************************************************************************************************
using a sort algorithm to sort a list
****************************************************************************************************/
void sortAlgorithmUse()
{
    std::list<int> sortList;

    sortList.push_back(5);
    sortList.push_back(4);
    sortList.push_back(3);

    std::cout << "Sort algorithm implementation: \n\n";
    std::cout << "A list consisting of 5, 4, 3 need to be sorted to smallest to largest, easily done using the sort() function \n\n";

    sortList.sort(); // uses an in built algorithm to sort the elements into order

    std::cout << "To make sure it worked we can access the top element with front(), the top element is now " << sortList.front() << "\n\n";
}

/***************************************************************************************************
implementing a self created search algorithm to check numbers are present in a list
****************************************************************************************************/
void searchAlgorithmUse()
{
    int userInput;

    std::list<int> listToSearch;

    listToSearch.push_back(28);
    listToSearch.push_back(32);
    listToSearch.push_back(67);

    std::cout << "Search algorithm implementation: \n\n";
    std::cout << "A list consists of the numbers 28, 32, 67\n\n";
    std::cout << "You can test to see if these number are present by typing one of the numbers in and a search algorithm will check\n\n";

    std::cin >> userInput;

    std::cout << "\n\n";

    linearSearch(listToSearch, userInput);
}

/***************************************************************************************************
simple adding of a hash number
****************************************************************************************************/
void hashingImplementation()
{
    std::hash<int> hashedNumber;

    std::cout << "The hash value for the hash variable hashedNumber is " << hashedNumber._Do_hash << "\n\n";
}

/***************************************************************************************************
function to allow the user to go back to the home screen or exit the program
****************************************************************************************************/
void backToHomeScreen()
{
    char nextMove;

    std::cout << "if you would like to return to the home screen type h or to exit the program type e\n\n";

    std::cin >> nextMove;

    if (nextMove == 'h')
    {
        system("cls");

        main();
    }
    else if (nextMove == 'e')
    {
        exit(0);
    }
}

/***************************************************************************************************
checks to see which number the user input and send them to desired content
****************************************************************************************************/
void checkForSelection()
{
    int userNumberSelection;

    std::cin >> userNumberSelection;

    // check to see what number the user typed and open the content accordingly
    switch (userNumberSelection)
    {
    case 1: listImplementation();
        backToHomeScreen();
        break;

    case 2: stackImplementation();
        backToHomeScreen();
        break;

    case 3: queueImplementation();
        backToHomeScreen();
        break;

    case 4: priorityQueueImplementation();
        backToHomeScreen();
        break;

    case 5: dequeImplementation();
        backToHomeScreen();
        break;

    case 6: sortAlgorithmUse();
        backToHomeScreen();
        break;

    case 7: searchAlgorithmUse();
        backToHomeScreen();
        break;

    case 8: hashingImplementation();
        backToHomeScreen();
        break;
    }
}
