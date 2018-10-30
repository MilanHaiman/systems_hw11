all : stats.c
	gcc stats.c
run:
	./a.out
clean:
	rm *out