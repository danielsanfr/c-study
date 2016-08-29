src=regressao-linear.c
obj=$(src:.c=.o)
exec=regressao-linear
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
