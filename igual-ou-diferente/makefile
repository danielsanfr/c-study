src=igual-ou-diferente.c
obj=$(src:.c=.o)
exec=igual-ou-diferente
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
