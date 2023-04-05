#include "main.h"


/**
 *_puts_reursion - Output a string
 *
 * Return: String
 */

void _print_rev_recursion(char *s) {
    if (*s == '\0') {
        return;  
        
    }
    _print_rev_recursion(s + 1);  
    _ putchar(*s);  
}
