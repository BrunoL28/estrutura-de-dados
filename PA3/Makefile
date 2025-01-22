CXX = g++
CXXFLAGS = -Wall -Wextra -O2 -std=c++11 -pg

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

TARGET = $(BIN_DIR)/pa3.out

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

cleanall:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

run_fatorial:
	@for i in $$(seq 0 30); do $(TARGET) fatorial $$i; done

run_fibonacci:
	@for i in $$(seq 0 40); do $(TARGET) fibonacci $$i; done

.PHONY: all clean cleanall run_fatorial run_fibonacci