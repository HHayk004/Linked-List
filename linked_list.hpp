#ifndef LINKED_LIST_HPP
	#define LINKED_LIST_HPP
    template <typename T>
    std::ostream& operator<<(std::ostream& os, const Hayk::LinkedList<T>& other)
    {
        return other.operator<<(os);
    }

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
			head = nullptr;
            for (auto& elem : list)
			{
				push_back(elem);
			}
		}

		template <typename T>
		LinkedList<T>::~LinkedList()
		{
			Node* tmp = head;
	    	while (tmp)
			{
				Node* tmp_copy = tmp;
				tmp = tmp->m_next;
                delete tmp_copy;
		    }

            head = nullptr;
		}

        template <typename T>
        std::ostream& LinkedList<T>::operator<<(std::ostream& os) const
        {
            Node* tmp = head;
            while (tmp)
            {
                std::cout << tmp->m_val << ' ';
                tmp = tmp->m_next;
            }

            return os;
        }

        template <typename T>
        void LinkedList<T>::push_front(T val)
        {
            if (!head)
            {
                head = new Node(val);
            }

            else
            {
                Node* tmp = head;
                head = new Node(val);
                head->m_next = tmp;
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
				while (tmp->m_next)
				{
					tmp = tmp->m_next;
				}
				tmp->m_next = new Node(val);
			}
		}

        template <typename T>
        void LinkedList<T>::pop_front()
        {
            if (!head)
            {
                std::cerr << "Empty list for pop_front:\n";
                exit(-1);
            }

            else
            {
                Node* tmp = head;
                head = head->m_next;
                delete tmp;
                tmp = nullptr;
            }
        }

        template <typename T>
        void LinkedList<T>::pop_back()
        {
            if (!head)
            {
                std::cerr << "Empty list fot pop_back:\n";
                exit(-1);
            }

            else if (!(head->m_next))
            {
                delete head;
                head = nullptr;
            }

            else
            {
                Node* tmp = head;
                while (tmp->m_next->m_next)
                {
                    tmp = tmp->m_next;
                }

                delete tmp->m_next;
                tmp->m_next = nullptr;
            }
        }

		template <typename T>
		LinkedList<T>::Node::Node(T val)
		{
			m_val = val;
			m_next = nullptr;
		}
}
#endif
