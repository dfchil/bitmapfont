# Generic Makefile

# Compiler and tools
CC = clang
CFLAGS = -Wall -Wextra -Og


#-arch arm64 
LDFLAGS = -I$(shell pwd)/include

# Directories
SRCDIR = src
BINDIR = bin
RASTERDIR = raster_output

# Files
TARGET = $(BINDIR)/program
OBJECTS = $(shell find ./src/ -name '*.c' -not -path "./.git/*" | sed -e 's/\(.*\).c/\1.o/g')
# OBJECTS += $(shell find ./src/vmu/ -name '*.c' -not -path "./.git/*" | sed -e 's/\(.*\).c/\1.o/g')


$(info $$OBJECTS is [${DOBJECTS}])

# Rules
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(TARGET) $(OBJECTS) $(RASTERDIR)

run: $(TARGET)
	@mkdir -p $(RASTERDIR)
	@./$(TARGET) 

pngfiles: run
	$(shell for f in $(RASTERDIR)/*.pnm ; do convert $$f "$$f.png" ; done;)

.PHONY: all clean pngfiles