CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: harl

harl: main.o Harl.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f harl

re: fclean all
