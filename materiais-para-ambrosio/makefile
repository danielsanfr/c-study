src=materiais-para-ambrosio.c
obj=$(src:.c=.o)
exec=materiais-para-ambrosio
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
