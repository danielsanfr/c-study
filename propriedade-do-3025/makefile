src=propriedade-do-3025.c
obj=$(src:.c=.o)
exec=propriedade-do-3025
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
