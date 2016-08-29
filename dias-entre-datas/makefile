src=dias-entre-datas.c
obj=$(src:.c=.o)
exec=dias-entre-datas
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
