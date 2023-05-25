#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *index, *node;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
        {
            if (ht->array[i] != NULL)
                j++;
        }
        j--;

        printf("{");
		for (i = 0; i < ht->size; i++)
		{
			index = node = ht->array[i];
			if (ht->array[i] != NULL)
			{
				printf("\'%s\': \'%s\'", index->key, index->value);
				while (index->next)
				{
					printf(", \'%s\': \'%s\'", index->next->key, index->next->value);
					index = index->next;
				}
                if (j)
                    printf(", ");
			}
		}
		printf("}\n");
	}
}
