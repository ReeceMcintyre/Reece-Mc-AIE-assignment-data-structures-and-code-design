#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <string>

#include "MyFunctions.h"

int main()
{   
    // display and instructions on how to navigate the program
    std::cout << "Reeces assessment program\n\n";
    std::cout << "The contents of include: \n\n";

    std::cout << "1. Linked list\n";
    std::cout << "2. Stack\n";
    std::cout << "3. Queue\n";
    std::cout << "4. Priority queue\n";
    std::cout << "5. Deque\n";
    std::cout << "6. Sort algorithm\n";
    std::cout << "7. Search algorithm\n";
    std::cout << "8. Hashing\n\n";

    std::cout << "Type the number selection to view its contents\n\n";
    
    checkForSelection();


    system("pause");
}