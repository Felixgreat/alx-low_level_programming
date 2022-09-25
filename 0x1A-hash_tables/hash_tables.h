#ifndef HASH_TABLES_H                                                                                                                 
#define HASH_TABLES_H                                                                                                                 
                                                                                                                                      
#include <stdio.h>                                                                                                                    
#include <stdlib.h>                                                                                                                   
#include <string.h>                                                                                                                   
                                                                                                                                      
/**                                                                                                                                   
 * struct hash_node_s - Node of a hash table                                                                                          
 * @key: The key, string                                                                                                              
 * The key is unique in the HashTable                                                                                                 
 * @value: The value corresponding to a key                                                                                           
 * @next: A pointer to the next node of the List                                                                                      
 */                                                                                                                                   
typedef struct hash_node_s                                                                                                            
{                                                                                                                                     
        char *key;                                                                                                                    
        char *value;                                                                                                                  
        struct hash_node_s *next;                                                                                                     
} hash_node_t;                                                                                                                        
                                                                                                                                      
/**                                                                                                                                   
 * struct hash_table_s - Hash table data structure                                                                                    
"hash_tables.h" 85L, 2638C 
