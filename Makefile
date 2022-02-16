
all: main

main: main.o a.o b.o c.o
	cc -o main main.o a.o b.o c.o

info:
	@for f in *.o; do printf "%-20s : " $$f; nm $$f |grep global_table; done

clean:
	rm -f *.o
