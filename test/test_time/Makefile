override CXX = g++
override CPPFLAGS = -DNDEBUG
override CXXFLAGS = -O2
override CC = $(CXX)
override CFLAGS = $(CXXFLAGS)
%.out:%.o
	$(CXX) $(CFLAGS) $(CPPFLAGS) -o $(@) $(<)

test_time.out: test_time.o

.PHONY: run
run: test_time.out
	./test_time.out

.PHONY: clean
clean:
	-rm *.o
	-rm *.out

.PHONY: clean_run
clean_run:
	-rm *.txt

.PHONY: clean_all
clean_all: clean clean_run
