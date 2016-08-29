src=reverso-e-soma.c
obj=$(src:.c=.o)
exec=reverso-e-soma
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
