src=avaliador-de-jogo-da-velha.c
obj=$(src:.c=.o)
exec=avaliador-de-jogo-da-velha
head=
cflags=-Wall
all: $(exec)
$(exec): $(scr) $(head)
	gcc $(cflags) $(src) -o $@
clean:
	rm -f $(obj) $(exec)
