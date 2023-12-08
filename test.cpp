#include "linked_list.h"

int main()
{
    Hayk::LinkedList<int> obj({3, 1, 2, 4, 0});

    obj.sort();

    std::cout << obj << std::endl; 

	return 0;
}
