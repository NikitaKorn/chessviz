OBJ_CATALOG=build/src
OBJ_CATALOG_TEST=build/test

CC=gcc
CFLAGS=-c -Wall -Werror
LDFLAGS=-Wall -Werror
SOURCES=main.c BlackB.c BlackK.c BlackN.c BlackP.c BlackQ.c BlackR.c Print.c StartDesk.c WhiteB.c WhiteK.c WhiteN.c WhiteP.c WhiteQ.c WhiteR.c
SOURCES_TEST=main-test.c 
VPATH=src test

.PHONY: all clean

OBJECTS=$(addprefix $(OBJ_CATALOG)/, $(SOURCES:.c=.o))
OBJECTS_TEST=$(addprefix $(OBJ_CATALOG_TEST)/, $(SOURCES_TEST:.c=.o))
EXECUTABLE=chessviz-

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(OBJECTS_TEST)
	$(CC) $(LDFLAGS) $(OBJECTS_TEST) -o bin/main-test
	$(CC) $(LDFLAGS) $(OBJECTS) -o bin/main
	./bin/main-test

$(OBJ_CATALOG)/%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

$(OBJ_CATALOG_TEST)/%.o: %.c
	$(CC) -I thirdparty -I src $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_CATALOG)/*.o $(OBJ_CATALOG_TEST)/*.o bin/*.exe
