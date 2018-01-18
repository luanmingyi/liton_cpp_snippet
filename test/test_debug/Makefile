override CXX = g++
override CPPFLAGS = -DNDEBUG
override CXXFLAGS = -std=c++11 -O2
override CC = $(CXX)
override CFLAGS = $(CXXFLAGS)
proname = test_debug

%.out:%.o
	$(CXX) $(CFLAGS) $(CPPFLAGS) -o $(@) $(<)

$(proname).out: $(proname).o

.PHONY: run
run: $(proname).out
	./$(proname).out
	cat *.txt

.PHONY: clean
clean:
	-rm *.o
	-rm *.out

.PHONY: clean_run
clean_run:
	-rm *.txt

.PHONY: clean_all
clean_all: clean clean_run
