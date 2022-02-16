#include <stdio.h>

// NB: global_table is not `extern` here
int global_table;

int cccc() {
	printf("cccc | &global_table: %p | global_table: %d\n", &global_table, global_table);
}
