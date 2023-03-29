NAME = ex03
OBJS = main.o AMateria.o Ice.o Cure.o Character.o Inventory.o Character.o MateriaSource.o

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
LDFLAGS = -fsanitize=address

all: $(NAME)
.PHONY: all


.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all


.cpp.o:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^
