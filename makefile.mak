CC = g++
CFLAGS = -std=c++11 -Wall

all: HW2main

HW2main: HW2main.o pi_approx.o approximations.o
	$(CC) $(CFLAGS) -o $@ $^

HW2main.o: HW2main.cpp pi_approx.h approximations.h
	$(CC) $(CFLAGS) -c $<

pi_approx.o: pi_approx.cpp pi_approx.h
	$(CC) $(CFLAGS) -c $<

approximations.o: approximations.cpp approximations.h pi_approx.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o HW2main
