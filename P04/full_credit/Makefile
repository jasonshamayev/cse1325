# Makefile for Coin
CXXFLAGS += --std=c++17

all: coin

logger: CXXFLAGS += -DLOGGER 
logger: coin

rebuild: clean coin

coin: test.o coin.o *.h
	$(CXX) $(CXXFLAGS) -o coin test.o coin.o

test.o: test.cpp *.h
	$(CXX) $(CXXFLAGS) -c test.cpp

coin.o: coin.cpp *.h
	$(CXX) $(CXXFLAGS) -c coin.cpp

coin.gch: coin.h
	$(CXX) $(CXXFLAGS) -c coin.h -o coin.gch

clean:
	rm -f *.o *.gch *~ coin
