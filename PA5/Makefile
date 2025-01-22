# Variáveis
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude -Wall -Wextra -O2
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)/pa5.out

# Arquivos-fonte
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

# Regras principais
all: directories $(TARGET)

# Regra para compilar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regra para compilar os objetos
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Criar diretórios necessários
directories:
	mkdir -p $(OBJDIR) $(BINDIR)

# Executar o programa
run: $(TARGET)
	./$(TARGET)

# Limpeza
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Phony targets
.PHONY: all clean directories