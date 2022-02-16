#include <stdio.h>

extern int global_table;

int aaaa() {
	printf("aaaa | &global_table: %p | global_table: %d\n", &global_table, global_table);
}
