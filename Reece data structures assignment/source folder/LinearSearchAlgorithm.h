#pragma once


/***************************************************************************************************
search algorithm that checks if the number is present in the list
****************************************************************************************************/
void linearSearch(std::list<int> searchableList, int userSearch)
{
    for (int i = 1; i > 0; i++) // loop so that all the lists contents can be checked 
    {
        if (searchableList.front() == userSearch)
        {
            std::cout << "Yes that number is present\n\n";
            break;
        }
        else
        {
            searchableList.pop_front(); // pop all of the front numbers until the desired is found or not 
        }

        if (searchableList.empty())
        {
            std::cout << "That number is not present in the list\n\n";
        }
    }
}