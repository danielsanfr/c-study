src=multiplos-de-cinco.c
obj=$(src:.c=.o)
exec=multiplos-de-cinco
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
