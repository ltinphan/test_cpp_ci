#include <cassert>

#include <iostream> 

void test(){
	assert(1+1==2);
}

int main() {
	#ifndef NDEBUG
	std::cout << "Debug mode\n";
	std::cout << "Hello" << std::endl;

	test(); 
	#else
	assert(1==2);//faslse but must be removed in release mode
	std::cout << "Release mode\n";

	#endif


}
