#include <stdio.h>

extern int global_table;

int bbbb() {
	printf("bbbb | &global_table: %p | global_table: %d\n", &global_table, global_table);
}
