#include <iostream>
#include "tree.h"
int main()
{
	Tree<int> t;
	
	t.AddChild(5);
	t.AddChild(7);
	t.preOrder();
	return 0;	
}
