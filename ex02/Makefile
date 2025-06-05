CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: brain

brain: main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o brain
