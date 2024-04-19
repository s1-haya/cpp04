#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void testTitle(const std::string title);

//MateriaSourceクラスの仕様。Materiaを学習させるとき変数に入れるのではなく直接学習させる。
// 理由はクラスでdeleteするか、外部でdeleteするか統一したかったため。
// もう一つはMateriaSourceは僕的に構造体に近いと思ったのでクラス内で削除した方がいいと思った。
void testMateriaSource( void ) {
	testTitle("test materia source");
	IMateriaSource* materias = new MateriaSource();
	// AMateria* learnIce = new Ice();
	// materias->learnMateria(learnIce);
	materias->learnMateria(new Ice());
	materias->learnMateria(new Cure());
	materias->learnMateria(new Ice());
	materias->learnMateria(new Cure());
	materias->learnMateria(new Cure());
	materias->learnMateria(NULL);
	AMateria* ice;
	ice = materias->createMateria("ice");
	AMateria* cure = materias->createMateria("cure");
	AMateria* apple = materias->createMateria("apple");
	delete materias;
	delete ice;
	delete cure;
	delete apple;
	// AMateria* null = materias->createMateria(NULL);
	// (void) null;
	// delete learnIce;
}
