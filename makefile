OBJ_CATALOG=build

CC=gcc
CFLAGS=-c -Wall -Werror
LDFLAGS=-Wall -Werror
SOURCES=main.c BlackB.c BlackK.c BlackN.c BlackP.c BlackQ.c BlackR.c Print.c StartDesk.c WhiteB.c WhiteK.c WhiteN.c WhiteP.c WhiteQ.c WhiteR.c
VPATH=src

.PHONY: all clean

OBJECTS=$(addprefix $(OBJ_CATALOG)/, $(SOURCES:.c=.o))
EXECUTABLE=chessviz-

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o bin/main

$(OBJ_CATALOG)/%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_CATALOG)/*.o bin/*.exe
