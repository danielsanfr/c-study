src=sistema-horario.c
obj=$(src:.c=.o)
exec=sistema-horario
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
