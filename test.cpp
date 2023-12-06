#include "linked_list.h"

int main()
{
    Hayk::LinkedList<int> obj({1, 2, 3, 4, 5});

    obj.erase(5);

    std::cout << obj << std::endl; 

	return 0;
}
