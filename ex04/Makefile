CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: sed2

sed2: main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f sed2

re: fclean all
