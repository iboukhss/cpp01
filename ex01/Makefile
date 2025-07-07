CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: zombie

zombie: main.o Zombie.o zombieHorde.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f zombie

re: fclean all
