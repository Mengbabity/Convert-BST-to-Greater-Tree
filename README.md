# Convert-BST-to-Greater-Tree

给定一个二叉搜索树。将每个节点的值变为大于所有该值的节点值之和。

首先二叉搜索数的性质：右孩子的值最大，根节点居中，左孩子的值最小。所以，遍历时先取右孩子的值，再与根节点的值相加赋给根节点，最后再与左孩子的值相加赋给左孩子。
