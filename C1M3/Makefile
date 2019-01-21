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
# Makefile for cross compilation to the MSP432
#
# Use: make [TARGET]
#
# Build Targets:
#	<FILE>.i - Generate the preprocessed output of all c-program implementation files(-E flag)
#	<FILE>.asm - Generate assembly output of c-program implementation files and the final output executable (-S and objdump)
#	<FILE>.o - Generate the object file for all c-source files
#	build - Compile all object files and link into a final executable
#	compile-all - Compile all object files, but DO NOT link.
#	clean - remove all compiled objects, preprocessed outputs, assembly outputs, executable files and build output files.
#
#------------------------------------------------------------------------------

include sources.mk

TARGET = C1M3
PLATFORM=MSP432
CPU=cortex-m4
ARCH=thumb
SPECS=nosys.specs
LINKER_FILE = msp432p401r.lds

CC=arm-none-eabi-gcc
CFLAGS = -save-temps -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wall -Werror -g -O0 -std=c99
CPPFLAGS = -MD
LDFLAGS = -Xlinker -Map=$(TARGET).map -T $(LINKER_FILE)

%.i : $(SOURCES)
	$(CC) -E $(CPPFLAGS) $(CFLAGS) -o $@ -D$(PLATFORM) $<

%.o : $(SOURCES)
	$(CC) -c $(CPPFLAGS) $(CFLAGS) -o $@ -D$(PLATFORM) $<

%.asm : $(SOURCES)
	$(CC) -S $(CPPFLAGS) $(CFLAGS) -o $@ -D$(PLATFORM) $<

.PHONY: compile-all
compile-all:
	$(CC) -c $(CPPFLAGS) $(CFLAGS) -D$(PLATFORM) $(SOURCES)

.PHONY: build
build: $(TARGET).out

$(TARGET).out: compile-all
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $(TARGET).out $(INCLUDES) -D$(PLATFORM) $(SOURCES)

.PHONY: nm
nm:
	rm -f nmOutput.txt
	nm -C -l -n -S -s --special-syms --synthetic C1M3.out > nmOutput.txt

.PHONY: dump
dump:
	make main.asm
	make misc.asm
	rm -f mainDumpOutput.txt
	rm -f miscDumpOutput.txt
	cat main.asm > mainDumpOutput.txt
	cat misc.asm > miscDumpOutput.txt

.PHONY: clean
clean:
	rm -f *.out *.s *.gch *.map *.i *.asm *.o *.d nmOutput.txt mainDumpOutput.txt miscDumpOutput.txt

#Helps debug make file
#E.g type "make print-TARGET"
print-%  : ; @echo $* = $($*)