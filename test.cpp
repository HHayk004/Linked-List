#include "linked_list.h"

int main()
{
    Hayk::LinkedList<int> obj = {3, 1, 2, 4, 0};
	Hayk::LinkedList<int> obj1 = {1, 2, 3, 4, 5};

	obj = obj1;
	obj1 = {9, 8, 7, 6, 5, 4};

    std::cout << obj << std::endl;
    std::cout << obj1 << std::endl;

	return 0;
}
