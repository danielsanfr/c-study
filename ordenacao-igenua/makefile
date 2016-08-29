src=ordenacao-igenua.c
obj=$(src:.c=.o)
exec=ordenacao-igenua
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
