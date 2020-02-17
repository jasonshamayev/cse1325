# Makefile for Coin
CXXFLAGS += --std=c++17

all: coin

logger: CXXFLAGS += -DLOGGER
logger: coin

coin: main.o coin.o
	$(CXX) $(CXXFLAGS) main.o coin.o -o coin

test.o: test.o color.o
	$(CXX) $(CXXFLAGS) test.o coin.o -o test

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

coin.o: coin.cpp
	$(CXX) $(CXXFLAGS) -c coin.cpp -o coin.o

coin.gch: coin.h
	$(CXX) $(CXXFLAGS) -c coin.h -o coin.gch

clean:
	rm -f *.o *.gch ~* a.out test coin
