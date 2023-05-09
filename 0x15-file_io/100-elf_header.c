#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * check_elf - The fucntionc
 * @e_ident: A pointer to an array
 * Description: tthis is the desription
 */

void check_elf(unsigned char *e_ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_magic - The function
 * @e_ident: A pointer
 * Description: Trees
 */

void print_magic(unsigned char *e_ident)
{
    int index;

    printf("  Magic:   ");
    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", e_ident[index]);
        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * print_class - The function
 * @e_ident: A pointer to an array
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}


/**
 * print_data - The fucntion
 * @e_ident: A pointer to an array
 */

void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_version -The function
 * @e_ident: A pointer to an  array
 */

void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION])
    {
        case EV_CURRENT:
            printf(" (current)\n");
            break;
        default:
            printf("\n");
            break;
    }
}

/**
 * print_osabi - The function
 * @e_ident: A pointer to an array
 */

void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case
   }
