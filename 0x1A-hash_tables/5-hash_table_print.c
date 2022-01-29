#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table. Format: {key:value}
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int idx = 0, printed = 0;
    hash_node_t *actual_node;

    if (ht)
    {
        printf("{");
        if (ht->array)
        {
            while (idx < ht->size) 
            {
                actual_node = (ht->array)[idx];
                while (actual_node)
                {
                    printf("'%s': '%s'", actual_node->key, actual_node->value);
                    printed++;
                    if (actual_node->next || idx < (ht->size - 1))
                        printf(", ");
                    actual_node = actual_node->next;
                }
                idx++;
            }
            if (printed > 1)
                printf("\b\b}\n");
            else
                printf("}\n");
        }
    }
}
