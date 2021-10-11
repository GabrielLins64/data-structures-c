# Data Structures project makefile

# Compiler / Linker configs
CC        := gcc
CC_FLAGS  := -c        \
            #  -W        \
            #  -Wall     \
            #  -ansi     \
            #  -pedantic \

# Directories
SRC_DIR      := src
INCLUDE_DIR  := src
BIN_DIR      := bin
OBJ_DIR      := build

# Filenames
TARGET       := main
SRC          := $(wildcard $(SRC_DIR)/*.c)
H_SRC        := $(wildcard $(INCLUDE_DIR)/*.h)
OBJ          := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.obj)

#
# Compilation and linking
#
all: binFolder objFolder $(TARGET)

$(TARGET): $(OBJ)
	@echo "🚀 Building binary \"$@\" using GCC linker..."
	@$(CC) $^ -o $(BIN_DIR)/$@
	@echo "🎇 Build complete!"

$(OBJ_DIR)/%.obj: $(SRC_DIR)/%.c
	@echo "🪛  Compiling object file: $@..."
	@$(CC) $(CC_FLAGS) $< -I $(INCLUDE_DIR)/ -o $@

objFolder:
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)

binFolder:
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)

clean:
	@echo "Cleaning..."
	@del /F /Q $(OBJ_DIR)
	@del /F /Q $(BIN_DIR)
	@echo "Done!"

# Running the project
run:
	@./$(BIN_DIR)/$(TARGET)

.PHONY: all clean run
