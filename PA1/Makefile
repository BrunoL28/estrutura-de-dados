CC = gcc
CFLAGS = -Wall -Wextra -I$(INCLUDE_DIR)

INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRC_FILES = $(SRC_DIR)/mat.c $(SRC_DIR)/matop.c
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

EXEC = $(BIN_DIR)/matop

all: $(EXEC)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJ_FILES) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(EXEC)

run: $(EXEC)
	$(EXEC) -s -x 5 -y 5
	$(EXEC) -m -x 5 -y 5
	$(EXEC) -t -x 5 -y 5

clean:
	rm -f $(OBJ_DIR)/*.o $(EXEC)

purge: clean
	rm -rf $(OBJ_DIR) $(BIN_DIR)