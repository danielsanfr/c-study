src=revisao-de-contrato.c
obj=$(src:.c=.o)
exec=revisao-de-contrato
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
