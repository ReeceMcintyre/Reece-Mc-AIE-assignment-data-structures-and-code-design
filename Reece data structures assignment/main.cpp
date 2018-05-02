#include <iostream>
#include <algorithm>
#include <list>


int main()
{

    system("pause");
}

void listImplementation()
{
    // linked list implementation 
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