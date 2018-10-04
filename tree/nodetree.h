#ifndef NODETREE
#define NODETREE

template <class T>
struct NodeTree
{
	T value;
	NodeTree <T> * left;
	NodeTree <T> * right;
	NodeTree()
	{
		left = 0;
		right = 0;	
	}
	NodeTree (T & v)
	{
		data = v;
		right = 0;
		left = 0;
	}
};

#endif
