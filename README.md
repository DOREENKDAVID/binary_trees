# 0x1D. C - Binary trees

A Binary tree is a k-ary k=2 tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

A tree is a non-linear abstract data type with a hierarchy-based structure. It consists of nodes (where the data is stored) that are connected via links. The tree data structure stems from a single node called a root node and has subtrees connected to the root.

## Terminologies
Path − Path refers to the sequence of nodes along the edges of a tree.

Root − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent − Any node except the root node has one edge upward to a node called parent.

Child − The node below a given node connected by its edge downward is called its child node.

Leaf − The node which does not have any child node is called the leaf node.

Subtree − Subtree represents the descendants of a node.

Visiting − Visiting refers to checking the value of a node when control is on the node.

Traversing − Traversing means passing through nodes in a specific order.

Levels − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2,
Keys − Key represents a value of a node based on which a search operation is to be carried out for a node.

## Types of Trees
There are three types of trees −

1. General Trees

2. Binary Trees:
	 general trees in which the root node can only hold up to maximum 2 subtrees: left subtree and right subtree. Based on the number of children, binary trees are divided into three types.
	1. Full binary tree
	2. Complete binary tree
	3. Degenerative binary tree

3. Binary Search Trees:
		Is always stored in such a way that the values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node, i.e. left subtree < root node ≤ right subtree.

## Transversals
Traversal is a process to visit all the nodes of a tree and may print their values too. Because, all nodes are connected via edges (links) we always start from the root (head) node. That is, we cannot randomly access a node in a tree. There are three ways which we use to traverse a tree −

1. In-order Traversal:
	Left Root Right

2. Pre-order Traversal:
	Root Left Right

3. Post-order Traversal:
	Left Right Root
