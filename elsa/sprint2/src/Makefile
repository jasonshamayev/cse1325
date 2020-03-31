#makefile
CXXFLAGS += --std=c++17

GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: mainwin

debug: CXXFLAGS += -g
debug: mainwin

mainwin: main.o mainwin.o entrydialog.o store.o
	$(CXX) $(CXXFLAGS) main.o mainwin.o entrydialog.o store.o $(GTKFLAGS) -o store

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS) -o main.o

mainwin.o: mainwin.cpp *.h
	$(CXX) $(CXXFLAGS) -c mainwin.cpp $(GTKFLAGS) -o mainwin.o

entrydialog.o: entrydialog.cpp *.h
	$(CXX) $(CXXFLAGS) -c entrydialog.cpp $(GTKFLAGS) -o entrydialog.o

store.o: store.cpp *.h
	$(CXX) $(CXXFLAGS) -c store.cpp -o store.o

clean:
	rm -f *.o *.gch store
