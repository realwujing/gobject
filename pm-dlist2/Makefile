CFLAGS=`pkg-config --cflags gobject-2.0`
LDFLAGS=`pkg-config --libs gobject-2.0`
CC=gcc
SOURCES=main.c pm-dlist.c
all: $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(LDFLAGS) -o test