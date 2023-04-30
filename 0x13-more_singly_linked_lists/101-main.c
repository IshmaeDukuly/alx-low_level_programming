#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    reverse_listint(&head);
    print_listint(head);    
    free_listint2(&head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./l 
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117== 
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117== 
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117== 
==3117== All heap blocks were freed -- no leaks are possible
==3117== 
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x13-more_singly_linked_lists
File: 100-reverse_listint.c
 
12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example
julien@ubuntu:~/0x13. More singly linked lists$ cat 101-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
