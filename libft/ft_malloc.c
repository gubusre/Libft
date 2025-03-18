#include <unistd.h>
#include <stdio.h>

#define BLOCK_SIZE 4096 // size of black

typedef struct block_header
{
    size_t size;

    struct block_header *next;
    int free; // 1 = free, 0 = full
} block_header;

static  block_header *head = NULL; // Linked block list.

void *ft_malloc(size_t size)
{
    if (size == 0)
        return NULL;

    size_t total_size = size + sizeof(block_header);
    block_header *block;
    block_header *prev;

    block = head;
    prev = NULL;
    // lf block big enought
    while (block)
    {
        if (block->free && block->size >= size)
        {
            block->free = 0;
            return (void *)(block + 1); // Retornar el puntero después del encabezado
        }
        prev = block;
        block = block->next;
    }

    // No se encontró un bloque libre, solicitar más memoria al sistema operativo
    size_t  alloc_size;
    
    alloc_size = (total_size + BLOCK_SIZE - 1) / BLOCK_SIZE * BLOCK_SIZE;
    block = (block_header *)sbrk(alloc_size);
    if (block == (void *)-1)
        return NULL; // Fallo al obtener memoria del sistema
    block->size = alloc_size - sizeof(block_header);
    block->next = NULL;
    block->free = 0;
    if (prev)
        prev->next = block;
    else 
        head = block;
    return (void *)(block + 1);
}

void ft_free(void *ptr)
{
    if (ptr == NULL)
        return;
    block_header *block;
    
    block = (block_header *)ptr - 1;
    block->free = 1;

    // Coalescencia: Fuuuuusioon
    block_header *current;
    block_header *prev;

    current = head;
    prev = NULL;
    while (current) {
        if (current->free) {
            // Fusionar con el bloque anterior si está libre
            if (prev && prev->free) {
                prev->size += sizeof(block_header) + current->size;
                prev->next = current->next;
                current = prev; // Continuar desde el bloque fusionado
            }
            // Fusionar con el bloque siguiente si está libre
            if (current->next && current->next->free) {
                current->size += sizeof(block_header) + current->next->size;
                current->next = current->next->next;
            }
        }
        prev = current;
        current = current->next;
    }
}

int main(void)
{
    int *my_int = (int *)ft_malloc(sizeof(int));
    *my_int = 10;
    printf("valor de my_int : %d\n", *my_int);
    ft_free(my_int);
    return (0);
}