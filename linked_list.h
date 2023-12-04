#ifndef LINKED_LIST_H
	#define LINKED_LIST_H
	#include <initializer_list>

	namespace Hayk {
		template <typename T>
		class LinkedList {	
		public:
			class Node
			{
			private:
				T val;
				Node* next;
			
			public:
				Node(T val = 0);
			};

			LinkedList();
			LinkedList(T);
			LinkedList(std::initializer_list<T>);	
			~LinkedList();

			void push_back(T);

		private:
			Node* m_head;
		};
	}
	#include "linked_list.hpp"
#endif
