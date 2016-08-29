src=matriculas-duplas.c
obj=$(src:.c=.o)
exec=matriculas-duplas
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
