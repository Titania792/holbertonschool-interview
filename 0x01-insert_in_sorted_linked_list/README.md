# 0x01. Insert in sorted linked list

### Task
#### Insert in sorted linked list
Technical interview preparation:
- You are not allowed to google anything
- Whiteboard first

Write a function in C that inserts a number into a sorted singly linked list.

- Prototype: `listint_t *insert_node(listint_t **head, int number);`
- Return: the address of the new node, or `NULL` if it failed

#### Expected output using `[0-main.c](https://github.com/Titania792/holbertonschool-interview/blob/main/0x01-insert_in_sorted_linked_list/0-main.c)`:

```
Titania792@ubuntu:0x01$ gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-insert_number.c -o insert
Titania792@ubuntu:0x01$ ./insert
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
27
98
402
1024
Titania792@ubuntu:0x01$
```