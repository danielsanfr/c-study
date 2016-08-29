src=equacao-do-segundo-grau.c
obj=$(src:.c=.o)
exec=equacao-do-segundo-grau
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@ -lm
clean:
	rm -f $(obj) $(exec)
