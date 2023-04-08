#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htc = malloc(sizeof(hash_table_t));

	if (htc == NULL)
		return (NULL);
	htc->size = size;
	htc->array = calloc(size, sizeof(hash_node_t *));
	if (htc->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		htc->array[i] = NULL;
	return (htc);
}
