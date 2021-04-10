#include <cassert>

#include <iostream> 

void test(){
	assert(1+1==2);
}

int main() {
	#ifndef NDEBasdfsdUG
	std::cout << "Debug mode\n";
	std::cout << "Hello" << std::endl;

	test(); 
	pti
	#else
	assert(1==2);//faslse but must be removed in release mode
	std::cout << "Release mode\n";
	
	// add std::cout in br1
	std::cout << "br1" << std::endl;

	#endif


}
