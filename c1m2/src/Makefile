#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Make file for the c1m2 assessment project
#
# Use: make [TARGET] [OVERRIDES]
#
# Build Targets:
#      <FILE>.o - Builds <FILE>.o object file
#      build - Builds and links all source files
#      all - Same as build
#      clean - removes all generated files
#
# Overrides:
#      CPU - ARM Cortex Architecture (cortex-m0plus, cortex-m4)
#      ARCH - ARM Architecture (arm, thumb)
#      SPECS - Specs file to give the linker (nosys.specs, nano.specs)
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = HOST
TARGET = c1m2

# Architectures Specific Flags
LINKER_FILE = ../msp432p401r.lds
CPU = cortex-m0plus
ARCH = thumb
SPECS = nosys.specs

# Compiler Flags and Defines
LDFLAGS = -Wl -Map=$(TARGET).map -T $(LINKER_FILE)
CFLAGS = -Wall -MMD -MP -Werror -g -O0 -std=c99
COMMON_CPPFLAGS = -Wall

ifeq ($(PLATFORM), HOST)
	CC = gcc
	LD = ld
	CPPFLAGS = $(COMMON_CPPFLAGS) -DHOST
else
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
	CPPFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) $(COMMON_CPPFLAGS) -DMSP432
endif

# Pattern matching to dynamically generate a list
# of object files variables (OBJS) from source
# Variables (SOURCES)
OBJS = $(SOURCES:.c=.o)
PREPROCESSED = $(SOURCES:.c=.i)
ASSEMBLY = $(SOURCES:.c=.asm)
DEP = $(SOURCES:.c=.d)

# Build target to generate object files
%.o : %.c 
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -o $@

# Generate the preprocessed output of all c-program
# implementation
%.i : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -E $< -o $@

# Generate the assembly output of c-program
%.asm : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -S $< -o $@
	objdump -d $@ > $@.objdump


# Using the ".PHONY" to indicate that its a non-file
# target so that make doesn't confuse that with a
# file
.PHONY: build
build: compile-all

.PHONY: compile-all
compile-all: $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(INCLUDES) -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(PREPROCESSED) $(ASSEMBLY) $(DEP) $(TARGET).out $(TARGET).map $(ASSEMBLY:.asm=.asm.objdump)