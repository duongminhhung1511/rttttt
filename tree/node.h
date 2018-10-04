#ifndef NODE
#define NODE

template <class T>
struct Node 
{
	T data;
	Node <T>* next;
};
