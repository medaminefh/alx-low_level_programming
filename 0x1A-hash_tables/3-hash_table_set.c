#include "hash_tables.h"

/**
 * make_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (NULL);
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}


/**
 * hash_table_set - sets a value to a key
 * @ht: table
 * @key: key
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *hash_node, *tmp;
	char *new_v;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_v = strdup(value);
			if (new_v == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_v;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;
	return (1);
}
