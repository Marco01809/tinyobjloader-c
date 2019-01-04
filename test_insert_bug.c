#define TINYOBJ_LOADER_C_IMPLEMENTATION
#include "tinyobj_loader_c.h"

/* gcc -std=c89 -Wall -Wextra -Wformat=0 -pedantic -g -O0 -o test_insert_bug test_insert_bug.c */

int main(void) {
  hash_table_t table;
  create_hash_table(HASH_TABLE_DEFAULT_SIZE, &table);

  hash_table_set("Pottery_clay0", 0, &table);
  hash_table_set("Dark_smoked_gla0", 1, &table);
  hash_table_set("Pottery_clay1", 2, &table);
  hash_table_set("Dark_smoked_gla1", 3, &table);
  hash_table_set("Metallic_Varni0", 4, &table);
  hash_table_set("Body0", 5, &table);
  hash_table_set("Pottery_clay2", 6, &table);
  hash_table_set("850matri0", 7, &table);
  hash_table_set("850matri1", 8, &table);
  hash_table_set("Pottery_clay3", 9, &table);
  hash_table_set("Pottery_clay4", 10, &table); /* Segfaults */

  return EXIT_SUCCESS;
}
