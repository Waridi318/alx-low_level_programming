#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{	
	hash_table_t* htc = malloc(sizeof(hash_table_t));
	
	if (htc == NULL)
		return (NULL);
	htc->size = size;
	htc->array = calloc(size, sizeof(hash_node_t*));	
	return (htc);	
}
