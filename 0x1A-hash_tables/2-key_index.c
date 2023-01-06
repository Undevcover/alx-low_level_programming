#include "hash_tables.h"
/**
 * key_index - Funtion that gives the index of a key
 * @key: The key to hash to index
 * 2size: The size of array of the hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
