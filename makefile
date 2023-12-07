CC = gcc

CFLAGS = -Wall -g -lSDL2 -lSDL2main -Isrc
LDLIBS = -lm -lSDL2 -lSDL2main

SRC = src
OBJ = obj
BIN = bin/main
MKDIR = mkdir -p
SRCs := $(shell find $(SRC) -name "*.c")
OBJs := $(subst $(SRC), $(OBJ), $(SRCs:.c=.o))

all: $(BIN)

$(BIN): $(OBJs)
	$(MKDIR) bin 
	$(CC) $(CFLAGS) $(OBJs) -o $@ $(LDLIBS)

$(OBJs): $(SRCs)
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -c $(subst $(OBJ), $(SRC), $(@:.o=.c)) -o $@

clean:
	$(RM) -R $(BIN)
	$(RM) -R $(OBJ)
