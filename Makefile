#.SUFFIXES:.cpp .o
CC=g++
CFLAGS= -Wall
CFLAGS+= -O3 
CFLAGS+= -std=c++11

#CFLAGS+= -gstabs+
#CFLAGS+= -pg


LINKER= $(CC)
LFLAGS= $(CFLAGS)

SRC = Source.cpp

OBJ = $(SRC:.cpp=.o)

EXEC = bubble

%.o:	%.cpp 
	$(CC) -c $(CFLAGS) $< -o $@

all:	$(EXEC)

$(EXEC): 	$(OBJ)
		$(LINKER) $(LFLAGS) $(OBJ) -o $@

clean:
	rm -f *.o; rm -f $(EXEC); rm -f core; rm -f *.out; rm -f *~;



