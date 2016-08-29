src=caracteristicas-fisicas.c
obj=$(src:.c=.o)
exec=caracteristicas-fisicas
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
