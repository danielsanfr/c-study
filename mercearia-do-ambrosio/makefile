src=mercearia-do-ambrosio.c
obj=$(src:.c=.o)
exec=mercearia-do-ambrosio
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
