PROG = makefile
CC = gcc
SRCS = main.c chiffrer.c dechiffrer.c verifierCode.c
OBJS = $(SRCS:.c=.o)

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(PROG)

.PHONY: all clean
