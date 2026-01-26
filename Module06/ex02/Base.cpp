#include "Base.hpp"

Base::~Base(){}

Base	*generate(void){
	switch (rand() % 3) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		return;
}

void identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}catch (const std::exception& e){}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}catch (const std::exception& e){}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}catch (const std::exception& e){}
}

int main() {
    std::srand(std::time(NULL));

	for (int i = 0; i < 5; i++){
		Base* obj = generate();
	
		std::cout << "Identify by pointer: ";
		identify(obj);
	
		std::cout << "Identify by reference: ";
		identify(*obj);
	
		delete (obj);
	}
    return 0;
}