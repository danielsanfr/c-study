src=adivinhe.c
obj=$(src:.c=.o)
exec=adivinhe
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
