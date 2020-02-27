CXXFLAGS += --std=c++17


all: product

product: store.o product.o *.h
	$(CXX) $(CXXFLAGS) store.o product.o -o product

store.o: store.cpp *.h
	$(CXX) $(CXXFLAGS) store.cpp -c -o store.o

product.o: product.cpp *.h
	$(CXX) $(CXXFLAGS) product.cpp -c -o product.o

taxed.o: taxed.cpp *.h
	$(CXX) $(CXXFLAGS) taxed.cpp -c -o taxed.o

taxfree.o: taxfree.cpp *.h
	$(CXX) $(CXXFLAGS) taxfree.cpp -c -o taxfree.o

clean:
	rm -f  *.o *.gch a.out product