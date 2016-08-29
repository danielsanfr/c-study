src=fahrenheit-para-celsius.c
obj=$(src:.c=.o)
exec=fahrenheit-para-celsius
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
