#include <iostream>

int
func()
{
<<<<<<< HEAD
	return -1;
=======
	std::cout << "test" << std::endl;
	return ;
>>>>>>> a5d833fa3673471e3f363b1408fe0be9dcdca47b
}

int
main()
{
	func();
	std::cout << "test" << std::endl;
}
