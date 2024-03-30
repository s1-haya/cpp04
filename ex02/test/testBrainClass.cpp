#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);
void testJudgeString(const std::string& expected, const std::string& output);
void testCopyConstructor();
void testCopyAssignmentOperator();
/*
test:
Brain Class
- Whether << operator is working correctly or not.
- Whether the array std::string is correctly filled.
- Whether setIdea is working correctly or not.
- Whether Orthodox Canonical Form is working correctly or not
*/

void testBrainClass() {
	testTitle("Brain Class");
	Brain brain;
	testJudgeString("\0", brain.getIdea(100));
	testJudgeString("\0", brain.getIdea(-1));
	// testJudgeString("Default ideas", brain.getIdea(-1));
	brain.setIdea("\033[31mj cole\033[0m", 0);
	brain.setIdea("\033[31mlitle simiz\033[0m", 99);
	brain.setIdea("\033[34mjay z\033[0m", 100);
	brain.setIdea("\033[34mjay z\033[0m", -1);
	std::cout << brain << std::endl;
	testCopyConstructor();
	testCopyAssignmentOperator();
}

void testCopyConstructor() {
	testTitle("Brain Copy Constructor");
	Brain brain;
	brain.setIdea("\033[31mj cole\033[0m", 0);
	brain.setIdea("\033[31mLil Durk\033[0m", 99);
	Brain copyBrain(brain);
	std::cout << copyBrain.getIdea(99) << std::endl;
}

void testCopyAssignmentOperator(){
	testTitle("Brain Copy Assignment Operator");
	Brain brain;
	brain.setIdea("\033[31mj cole\033[0m", 0);
	brain.setIdea("\033[31mLil Baby\033[0m", 99);
	Brain copyBrain;
	copyBrain = brain;
	std::cout << copyBrain.getIdea(99) << std::endl;
}
