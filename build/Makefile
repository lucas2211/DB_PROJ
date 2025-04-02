CC = gcc
CFLAGS = -I../include -Wall

SRC = ../src/controller/main.c \
      ../src/model/hardware.c \
      ../src/model/security.c \
      ../src/view/menu_cli.c

OUT = kernel.elf

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
