#include "hash_tables.h"
/**
 * comment
 * for betty
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
	{hash_table_t *hash_table;
	unsigned long int index;
	hash_table = malloc(sizeof(hash_table_t);
	if(hash_table == NULL)
	return NULL;
	hash_table->size = size;
	hash-table->array = malloc(size * sizeof(hash_node_t *));
	if(hash_table->array == NULL)
	{
	free(hash_table);
	return NULL;
	}
	for(index = 0; index < size; index++)
	{
		hash_table->array[index] = NULL;
	}
	return (hash_table);
	}
