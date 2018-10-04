#ifndef TREE
#define TREE
#include "nodetree.h"
#include "queue.h"
#include "node.h"
#include <queue>

template <class T>
class Tree
{
	private:
		NodeTree <T> * root = NULL;
		void bfs()
		{
			queue<Node<T>*> q;
			q.push(root);
			while (!q.empty())
			{
				Node<T> * temp = q.head();
				cout << temp -> data << " ";
				if (temp -> left)
					q.push(temp -> left);
				if (temp -> right)
					q.push(temp -> right);
				q.pop;	
			}
		}
		
		void preorder (Node<T> *r)
		{
			cout << r-> data << " ";
			if (r->left)
				preorder (r-> left);
			if (r->right)
				preorder (r-> right);
		}
		
		void inorder (Node<T> *r)
		{
			
			if (r->left)
				inorder (r-> left);
			cout << r-> data << " ";	
			if (r->right)
				inorder (r-> right);
		}
		
		void postorder (Node<T> *r)
		{
			
			if (r->left)
				postorder (r-> left);	
			if (r->right)
				postorder (r-> right);
			cout << r-> data << " ";
		}
	public:
		void AddChild (T val)
		{
			Node <T> * p = new Node();
			if (root == NULL)
				root = p;
			else
			{
				queue <Node<T> *> q;
				Node <T> * temp = root;
				q.push(temp)
				while( ! q.empty())
				{
					Node<T> *t  =q.DeQueue();
					if(t -> left == 0)
					{
						t -> left = n;
						break;
					}
					else if( t -> right == 0)
					{
						t -> right = n;
						break;
					}
					else
					{
					q.pop(t -> left );
					q.pop(t -> right );
					}
				}			
			}
		}
}
#endif
