#include "hash_tables.h"
/**
 * node_create - creates a hash table node
 * @key: key
 * @value: value to be associated with the key
 * Return: ptr->item
 */
hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
		return (0);
	item->value = strdup(value);
	if (item->value == NULL)
		return (0);
	item->next = NULL;

	return (item);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = node_create(key, value);
	int index;
	hash_node_t *current_item;

	if (ht != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		current_item = ht->array[index];

		if (current_item == NULL)
		{
			ht->array[index] = item;
			return (1);
		}
		else
		{
			if (strcmp(current_item->key, key) == 0)
			{
				strcpy(ht->array[index]->value, value);
				return (1);
			}
			else
			{
				ht->array[index] = item;
				item->next = current_item;
				current_item = item;
				return (1);
			}
		}
	}
	return (0);
}
