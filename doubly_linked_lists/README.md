# 📚 0x17. C - Doubly Linked Lists

## 📌 Description

This project is part of the Holberton School low-level programming curriculum. It focuses on implementing and manipulating **doubly linked lists** in C.

A **doubly linked list** is a type of linked list in which each node contains a pointer to both the **next** and the **previous** node, allowing traversal in both directions.

---

## 🧠 Learning Objectives

- What is a doubly linked list
- How to traverse a doubly linked list in both directions
- How to manipulate nodes: add, insert, delete, retrieve, and free them
- What are the benefits and drawbacks of a doubly linked list compared to singly linked list

---

## 🛠️ Files and Prototypes

| File | Prototype | Description |
|------|-----------|-------------|
| `0-print_dlistint.c` | `size_t print_dlistint(const dlistint_t *h);` | Prints all elements of a `dlistint_t` list |
| `1-dlistint_len.c` | `size_t dlistint_len(const dlistint_t *h);` | Returns the number of elements in a list |
| `2-add_dnodeint.c` | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` | Adds a node at the beginning |
| `3-add_dnodeint_end.c` | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);` | Adds a node at the end |
| `4-free_dlistint.c` | `void free_dlistint(dlistint_t *head);` | Frees a list |
| `5-get_dnodeint.c` | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);` | Retrieves a node at a specific index |
| `6-sum_dlistint.c` | `int sum_dlistint(dlistint_t *head);` | Returns the sum of all data (n) |
| `7-insert_dnodeint.c` | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` | Inserts a node at a given index |
| `8-delete_dnodeint.c` | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);` | Deletes the node at index |

All function prototypes are defined in `lists.h`.

---

## ✅ Requirements

- Ubuntu 20.04 LTS
- `gcc` compiler with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must pass the [Betty style](https://github.com/holbertonschool/Betty)
- No memory leaks (tested with `valgrind`)

---

## 🔁 Usage

To compile and run each function with its corresponding test file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <function_file.c> -o output
./output

