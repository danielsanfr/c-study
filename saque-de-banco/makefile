src=saque-de-banco.c
obj=$(src:.c=.o)
exec=saque-de-banco
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
