# Définition des variables
CXX = gcc
CXXFLAGS = -Wall -Wextra 
SRC_DIR = tests
BIN_DIR = bin

# Recherche des fichiers sources et génération des noms de binaires
SOURCES = $(wildcard $(SRC_DIR)/*.c)
BINARIES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SOURCES))

# Règle par défaut
all: $(BINARIES)

# Compilation de chaque fichier source en un exécutable
$(BIN_DIR)/%: $(SRC_DIR)/%.c
	$(CXX) $(CXXFLAGS) $< -o $@ $(LIBS)

# Nettoyage
clean:
	rm $(BIN_DIR)/*