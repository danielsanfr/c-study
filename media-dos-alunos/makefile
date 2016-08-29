src=media-dos-alunos.c
obj=$(src:.c=.o)
exec=media-dos-alunos
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
