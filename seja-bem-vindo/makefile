src=seja-bem-vindo.c
obj=$(src:.c=.o)
exec=seja-bem-vindo
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
