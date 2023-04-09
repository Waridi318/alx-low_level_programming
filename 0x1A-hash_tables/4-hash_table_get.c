#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value asscociated with a key
 * @ht: hash table to look into
 * @key: key looked for
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current_item, *trav;

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	trav = ht->array[index];

	if (ht->array[index] != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);
		while (trav->next != NULL)
		{
			if (strcmp(trav->key, key) == 0)
				return (trav->value);
			trav = trav->next;
		}
		if (strcmp(trav->key, key) == 0)
			return (trav->value);
	}
	return (NULL);
}
