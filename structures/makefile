cc = gcc
target = struc4
lflag = -Wall
cflag =

$(target) : $(target).o
	$(cc) $(target).o -o $(target)

$(target).o : $(target).c
	$(cc) $(lflag) -c $(target).c

all : $(target)

run : 
	./$(target)

clean : 
	rm *.o $(target)

.phony : all run clean
