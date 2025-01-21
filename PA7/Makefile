CXX = g++
CXXFLAGS = -std=c++11 -Iinclude -Wall -Wextra -O2
OBJDIR = obj
BINDIR = bin
SRCDIR = src

SOURCES = $(SRCDIR)/ListaAdjacencia.cpp $(SRCDIR)/Grafo.cpp $(SRCDIR)/main.cpp
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
EXECUTABLE = $(BINDIR)/pa3.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)

