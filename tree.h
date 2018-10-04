#ifndef TREE
#define TREE
#include "nodetree.h"
#include "queue.h"
#include "node.h"
#include <queue>
using namespace std;
template <class T>
class Tree
{
	private:
		NodeTree <T> * root;
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
		
		void preorder (NodeTree<T> *root)const
		{
			if(root != 0){
				cout << root-> data << " ";
			//if (root->left)
				preorder (root-> left);
			//if (root->right)
				preorder (root-> right);
			}	
		}
		
		void inorder (NodeTree<T> *root)const
		{
			
			if (root->left)
				inorder (root-> left);
			cout << root-> data << " ";	
			if (root->right)
				inorder (root-> right);
		}
		
		void postorder (NodeTree<T> *root)const
		{
			
			if (root->left)
				postorder (root-> left);	
			if (root->right)
				postorder (root-> right);
			cout << root-> data << " ";
		}
		
		void AddChild(T value, NodeTree<T> *root)
		{
			if (value < root -> data)
			{
				if (root -> left != NULL)
					AddChild(value, root -> left);
				else
				{
					root->left = new NodeTree<T>;
					root->left->data = value;
					root->left->left = NULL;
					root->left->right = NULL;
				}
			}
			else
			{
				if(value > root -> data)
				{
					if (root -> left != NULL)
						AddChild(value, root -> left);
					else
					{
						root->left = new NodeTree<T>;
						root->left->data = value;
						root->left->left = NULL;
						root->left->right = NULL;
					}
				}	
			}
		}
	public:
		Tree()
		{
			root = NULL;
		}
		void AddChild (T value)
		{
			if (root == NULL)
			{
				NodeTree <T> *p = new NodeTree<T>;
				p -> data = value;
				p-> left  = NULL;
				p -> right = NULL;
				root = p;
			}
			else
				AddChild (value, root);
		}
		void preOrder() const
		{
			preorder(root);
			cout << endl;
		}	
};
#endif
