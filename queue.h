#ifndef QUEUE
#define QUEUE

#include "node.h"
template < class T>
class Queue
{
	private:
		Node<T> *head = NULL;
	public:
		void EnQueue (T const &val)
		{
			Node <T> *p = new Node<T>;
			p -> data= val;
			p-> next = NULL;
			if ( head == NULL)
			{
				head = p;
			}
			else 
			{
				Node <T> * temp = head;
				while (temp -> next != NULL)
				{
					 temp = temp -> next;
				}
				temp -> next = p;
			}
		}
		T DeQueue ()
		{
			T temp = head -> data;
			Node <T> * q = head;
			head = head -> next;
			delete q;
			return temp;
		}
		bool isEmpty()const
		{
			return head == NULL;
		}
};

#endif
