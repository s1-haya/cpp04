NAME := ./practice_interface
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -MMD -MP -Wshadow
# CXXFLAGS += -pedantic-errors

SRCS_DIR := srcs
SRCS := main.cpp\
		$(SRCS_DIR)/AAnimal.cpp\
		$(SRCS_DIR)/AMateria.cpp\
		$(SRCS_DIR)/MateriaSource.cpp\
		$(SRCS_DIR)/Character.cpp\
		$(SRCS_DIR)/Cat.cpp\
		$(SRCS_DIR)/Dog.cpp\
		$(SRCS_DIR)/Ice.cpp\
		$(SRCS_DIR)/Cure.cpp\
		$(SRCS_DIR)/Brain.cpp\
		$(SRCS_DIR)/WrongAnimal.cpp\
		$(SRCS_DIR)/WrongCat.cpp\

TEST_DIR := test
SRCS += $(TEST_DIR)/test.cpp\
		$(TEST_DIR)/testTitle.cpp\
		$(TEST_DIR)/testCharacter.cpp\
		$(TEST_DIR)/testMateriaBehavior.cpp\
		$(TEST_DIR)/testMateriaSource.cpp\

OBJS_DIR := objs
OBJS := $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))

DEPS := $(OBJS:%.o=%.d)

INCLUDES := -I./includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $@

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)
