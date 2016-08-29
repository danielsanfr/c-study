src=figurinhas-dos-irmaos.c
obj=$(src:.c=.o)
exec=figurinhas-dos-irmaos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
