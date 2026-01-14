#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & n) : name(n) {
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(const Character& other) : name(other.name) {
	for (int i = 0; i < 4; i++)
		slots[i] = other.slots[i] ? other.slots[i]->clone() : NULL;
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < 4; i++) {
			if (slots[i])
				delete slots[i];
			slots[i] = other.slots[i] ? other.slots[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (slots[i])
			delete slots[i];
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
		if (slots[i] == m) {
			std::cout << name << " already has this materia equipped." << std::endl;
			return;
		}
	for (int i = 0; i < 4; i++) {
		if (!slots[i]) {
			slots[i] = m;
			std::cout << name << " equipped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
	}
	std::cout << name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		if (slots[idx]) {
			std::cout << name << " unequipped " << slots[idx]->getType() << " from slot " << idx << std::endl;
			slots[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && slots[idx])
		slots[idx]->use(target);
}
