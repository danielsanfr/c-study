src=propriedade-do-invertido.c
obj=$(src:.c=.o)
exec=propriedade-do-invertido
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
