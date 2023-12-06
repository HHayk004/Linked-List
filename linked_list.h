#ifndef LINKED_LIST_H
	#define LINKED_LIST_H
	#include <initializer_list>
    #include <iostream>

	namespace Hayk {
		template <typename T>
		class LinkedList {	
		public:
			class Node
			{
            public:
                T m_val;
                Node* m_next;

				Node(T val = 0); 
            };

			LinkedList();
			LinkedList(T);
			LinkedList(std::initializer_list<T>);	
			~LinkedList();

            std::ostream& operator<<(std::ostream&) const;
            
            void push_front(T);
			void push_back(T);
            void pop_front();
            void pop_back();

            size_t size() const;
            bool empty() const;
		
            void clear();

            void resize(size_t);
            void reverse();
            void swap(LinkedList<T>&);

            void insert(size_t, T);
            void erase(size_t);

        private:
            void free();

			Node* head;
		};
	}
	#include "linked_list.hpp"
#endif
