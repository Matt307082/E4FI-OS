# Définition des variables
CXX = gcc
CXXFLAGS = -Wall -Wextra -ansi -pedantic
TEST_DIR = tests
BIN_DIR = bin
LIB_DIR = lib
LIBS = $(LIB) 

SOURCES_TESTS = $(wildcard $(TEST_DIR)/*.c)
LIB = $(wildcard $(LIB_DIR)/*.c)
BINARIES = $(patsubst $(TEST_DIR)/%.c, $(BIN_DIR)/%, $(SOURCES_TESTS))

all: $(BINARIES) 

$(LIB_DIR)/%: $(LIB_DIR)/%.c
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/%: $(TEST_DIR)/%.c $(LIB)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LIBS)

clean: $(BINARIES) 
	rm $(BINARIES) 