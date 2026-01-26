#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::~Serializer(){}
Serializer::Serializer(Serializer& other){((void)other);}
Serializer&	Serializer::operator=(Serializer &other){((void)other);return (*this);}

uintptr_t Serializer::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){
	Data d;
	d.a = 42;
	d.b = 'A';
	Data* ptr = &d;

	uintptr_t raw = Serializer::serialize(ptr);
	std::cout << "Raw pointer as integer: " << raw << std::endl;

	Data* ptr2 = Serializer::deserialize(raw);
	std::cout << "Deserialized a: " << ptr2->a << ", b: " << ptr2->b << std::endl;
}