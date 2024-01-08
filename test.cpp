#include "linked_list.h"

int main()
{
    Hayk::LinkedList<int> obj = {3, 1, 2, 4, 0};

    Hayk::LinkedList<int>::Iterator it = obj.begin();

    obj.insert(it, -1);

    for (Hayk::LinkedList<int>::Iterator it = obj.begin(); it != obj.end(); it++)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

	return 0;
}
