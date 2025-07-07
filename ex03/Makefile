CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: human

human: main.o Weapon.o HumanA.o HumanB.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f human

re: fclean all
