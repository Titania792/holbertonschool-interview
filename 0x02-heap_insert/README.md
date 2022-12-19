# 0x02. Heap Insert
## Data structures

#### Basic Binary Tree

```
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

```

#### Max Binary Heap

```
typedef struct binary_tree_s heap_t;
```

## Tasks

### 0. New node

Write a function that creates a binary tree node:

-   Prototype:  `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
-   `parent`  is a pointer to the parent node of the node to create
-   `value`  is the value to put in the new node
-   When created, a node does not have any children
-   Your function must return a pointer to the new node, or  `NULL`  on failure
#### Expected output using [`0-main.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x02-heap_insert/0-main.c):
```
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
alex@/tmp/binary_trees$
```

-   File:  [`0-binary_tree_node.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x02-heap_insert/0-binary_tree_node.c)

### 1. Heap - Insert

Write a function that inserts a value into a Max Binary Heap:

-   Prototype:  `heap_t *heap_insert(heap_t **root, int value);`
-   `root`  is a double pointer to the root node of the Heap
-   `value`  is the value to store in the node to be inserted
-   Your function must return a pointer to the inserted node, or  `NULL`  on failure
-   If the address stored in  `root`  is  `NULL`, the created node must become the root node.
-   You have to respect a  `Max Heap`  ordering
-   You are allowed to have up to  `6`  functions in your file

#### Expected output using [`1-main.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x02-heap_insert/1-main.c):

```
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-heap_insert.c 0-binary_tree_node.c -o 1-heap_insert
alex@/tmp/binary_trees$ ./1-heap_insert
Inserted: 98
(098)

Inserted: 402
  .--(402)
(098)

Inserted: 12
  .--(402)--.
(098)     (012)

Inserted: 46
       .--(402)--.
  .--(098)     (012)
(046)

Inserted: 128
       .-------(402)--.
  .--(128)--.       (012)
(046)     (098)

Inserted: 256
       .-------(402)-------.
  .--(128)--.         .--(256)
(046)     (098)     (012)

Inserted: 512
       .-------(512)-------.
  .--(128)--.         .--(402)--.
(046)     (098)     (012)     (256)

Inserted: 50
            .-------(512)-------.
       .--(128)--.         .--(402)--.
  .--(050)     (098)     (012)     (256)
(046)
alex@/tmp/binary_trees$
```

-   File:  [`1-heap_insert.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x02-heap_insert/1-heap_insert.c), [`0-binary_tree_node.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x02-heap_insert/0-binary_tree_node.c)