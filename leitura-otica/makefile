src=leitura-otica.c
obj=$(src:.c=.o)
exec=leitura-otica
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
