#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *index;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			index = ht->array[i];
			while (index)
			{
				printf("\'%s\': \'%s\'", index->key, index->value);
				if (index->next)
					printf(", ");
				index = index->next;
			}
		}
		printf("}\n");
	}
}
