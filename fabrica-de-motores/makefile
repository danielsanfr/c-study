src=fabrica-de-motores.c
obj=$(src:.c=.o)
exec=fabrica-de-motores
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
