#ifndef LINKED_LIST_HPP
	#define LINKED_LIST_HPP
	namespace Hayk {
		template <typename T>
		LinkedList<T>::LinkedList()
		{
			head = nullptr;
		}
		
		template <typename T>
		LinkedList<T>::LinkedList(T val)
		{
			head = new Node(val);
		}

		template <typename T>
		LinkedList<T>::LinkedList(std::initializer_list<T> list)
		{
			for (auto& elem : list)
			{
				push_back(elem);
			}
		}

		template <typename T>
		LinkedList<T>::~LinkedList()
		{
			if (head)
			{
				while (head)
				{
					Node* tmp = head->next;
					delete head;
					head = tmp;
				}
			}
		}

		template <typename T>
		void LinkedList<T>::push_back(T val)
		{
			if (!head)
			{
				head = new Node(val);
			}

			else
			{
				Node* tmp = head;
				while (tmp->next)
				{
					tmp = tmp->next;
				}
				tmp->next = new Node(val);
			}
		}

		template <typename T>
		LinkedList<T>::Node<T>::Node(T val)
		{
			this->val = val;
			next = null
		}
	}
#endif
