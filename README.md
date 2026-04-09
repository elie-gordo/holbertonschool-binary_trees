# holbertonschool-binary_trees

## Description
Project about binary trees in C.

## Data structure
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style required
- No global variables
- No more than 5 functions per file
- Prototypes in `binary_trees.h`
- Header files must be include guarded

## Task 0: New node
Write a function that creates a binary tree node.

- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Returns: pointer to the new node, or `NULL` on failure
- File: `0-binary_tree_node.c`

## Task 2: Insert right
Write a function that inserts a node as the right-child of another node.

- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Returns: pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
- If `parent` already has a right-child, the new node takes its place and the old right-child becomes the right-child of the new node
- File: `2-binary_tree_insert_right.c`

## Task 4: Is leaf
Write a function that checks if a node is a leaf.

- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Returns: `1` if `node` is a leaf, otherwise `0`
- If `node` is `NULL`, returns `0`
- File: `4-binary_tree_is_leaf.c`

## Task 6: Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal.

- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- If `tree` or `func` is `NULL`, the function does nothing
- File: `6-binary_tree_preorder.c`

## Task 8: Post-order traversal
Write a function that goes through a binary tree using post-order traversal.

- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- If `tree` or `func` is `NULL`, the function does nothing
- File: `8-binary_tree_postorder.c`

## Task 10: Depth
Write a function that measures the depth of a node in a binary tree.

- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
- If `tree` is `NULL`, returns `0`
- File: `10-binary_tree_depth.c`

## Task 12: Leaves
Write a function that counts the leaves in a binary tree.

- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- If `tree` is `NULL`, returns `0`
- A `NULL` pointer is not a leaf
- File: `12-binary_tree_leaves.c`

## Task 14: Balance factor
Write a function that measures the balance factor of a binary tree.

- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
- If `tree` is `NULL`, returns `0`
- File: `14-binary_tree_balance.c`

## Task 16: Is perfect
Write a function that checks if a binary tree is perfect.

- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- If `tree` is `NULL`, returns `0`
- File: `16-binary_tree_is_perfect.c`

## Task 18: Uncle
Write a function that finds the uncle of a node.

- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- If `node` is `NULL`, returns `NULL`
- If `node` has no uncle, returns `NULL`
- File: `18-binary_tree_uncle.c`
