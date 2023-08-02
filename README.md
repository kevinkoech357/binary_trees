# 0x1D. C - Binary trees

A binary tree is a hierarchical data structure where each node has at most two children: a left child and a right child. It is commonly used for efficient searching, insertion, and deletion operations. Each node in a binary tree contains a value and pointers to its left and right children, which can be NULL if the child does not exist.

Here's a basic structure for a binary tree node in C:

```c
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
```

To create a binary tree, you'll typically start with its root node, and then build the tree by adding new nodes as needed. Here's a simple function to create a new node:

```c
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
```

To insert a new node into the binary tree, you'll need to find the appropriate position based on the node's value. Here's an example of an insertion function:

```c
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}
```

For binary tree traversal, there are three common methods: inorder, preorder, and postorder. In-order traversal visits the left subtree, then the current node, and finally the right subtree. Pre-order traversal visits the current node, then the left subtree, and finally the right subtree. Post-order traversal visits the left subtree, then the right subtree, and finally the current node.

Here's an example of an in-order traversal function:

```c
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
```

Remember to deallocate memory once you are done using the binary tree to prevent memory leaks.
