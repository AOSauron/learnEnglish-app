CC = g++
CFLAGS = -Wall -Wextra
OBJECTS = main.o

all: learnEnglish

learnEnglish: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)
	rm *.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o

mrproper: clean
	rm -rf ptar

test.pdf: main.cpp Makefile
	a2ps -o - main.cpp Makefile | ps2pdf - test.pdf
