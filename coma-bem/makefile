src=coma-bem.c
obj=$(src:.c=.o)
exec=coma-bem
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
