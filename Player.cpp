#include "Player.h"


Player::Player(string name, Race race,
	int hitPoints, int magicPoints){
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}


string Player::getName() const{
	return name;
}

Race Player::getRace() const{
	return race;
}

string Player::whatRace() const {
    switch (race) {
        case HUMAN: return "Human";
        case ELF: return "Elf";
        case DWARF: return "Dwarf";
        case ORC: return "Orc";
        case TROLL: return "Troll";
        default: return "Unknown";
    }
}

int Player::getHitPoints() const{
	return hitPoints;
}

int Player::getMagicPoints() const{
	return magicPoints;
}

void Player::setName(string name){
	this->name = name;
}

void Player::setRace(Race race){
	this->race = race;
}

void Player::setHitPoints(int hitPoints){
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints){
	this->magicPoints = magicPoints;
}