#include <stdio.h>

extern int global_table;

extern int aaaa();
extern int bbbb();
extern int cccc();

int main() {
	global_table = 1234;   
	aaaa();
	bbbb();
	cccc();
}
