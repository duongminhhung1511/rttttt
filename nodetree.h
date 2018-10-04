#ifndef NODETREE
#define NODETREE

template <class T>
struct NodeTree
{
	T data;
	NodeTree <T> * left;
	NodeTree <T> * right;
};

#endif
