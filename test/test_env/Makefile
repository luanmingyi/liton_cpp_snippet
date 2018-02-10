override CXX = g++
override CPPFLAGS = -DNDEBUG
override CXXFLAGS = -O2
override CC = $(CXX)
override CFLAGS = $(CXXFLAGS)
proname = test_env

%.out:%.o
	$(CXX) $(CFLAGS) $(CPPFLAGS) -o $(@) $(<)

$(proname).out: $(proname).o

.PHONY: run
run: $(proname).out
	./$(proname).out

.PHONY: clean
clean:
	-rm *.o
	-rm *.out

.PHONY: clean_run
clean_run:
	-rm *.txt

.PHONY: clean_all
clean_all: clean clean_run
